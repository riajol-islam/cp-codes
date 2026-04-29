 #include<bits/stdc++.h>
using namespace std;

#define int long long

vector<int> price, wait;
int n;
int dp[100][100001];

int knapsack(int pos,int c){

    if(pos==n) return 0;

    if(dp[pos][c]!=-1) 
        return dp[pos][c];

    int take=0;

    if(c>=wait[pos]){
        take=price[pos]+knapsack(pos+1,c-wait[pos]);
    }

    int nottake=knapsack(pos+1,c);

    dp[pos][c]=max(take,nottake);

    return dp[pos][c];
}

signed main(){

    freopen("inputf.txt","r",stdin);
    freopen("outputf.txt","w",stdout);

    int c;
    cin>>n>>c;

    for(int i=0,p,w;i<n;i++){
        cin>>w>>p;
        wait.push_back(w);
        price.push_back(p);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=c;j++){
            dp[i][j]=-1;
        }
    }

    cout<<knapsack(0,c)<<endl;
}