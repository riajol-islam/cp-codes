#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int n,b,d;
     cin>>n>>b>>d;
     vector<int>vec(n);
     for(int i=0;i<n;i++){
     	cin>>vec[i];
     }
     int waste=0;
     int empty=0;
     for(int i=0;i<n;i++){
     	if(vec[i]<=b){
     		waste+=vec[i];
     	}
     	if(waste>d){
     		waste=0;
     		empty++;
     	}
     }
     cout<<empty;

    return 0;
}