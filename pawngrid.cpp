#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int h,w;
     cin>>h>>w;
     char arr[h+1][w+1];
     for(int i=1;i<=h;i++){
     	for(int j=1;j<=w;j++){
     		 cin>>arr[i][j];
     	}
     }
     int ans=0;
     for(int i=1;i<=h;i++){
     	for(int j=1;j<=w;j++){
     		 if(arr[i][j]=='#'){
     		 	ans++;
     		 }
     	}
     }
     cout<<ans;


    return 0;
}