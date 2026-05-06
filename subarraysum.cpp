#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int n,m;
     cin>>n>>m;
     int arr[n+1][m+1];
     for(int i=1;i<=n;i++){
     	for(int j=1;j<=m;j++){
     		cin>>arr[i][j];
     	}
     }
     int r1,c1,r2,c2;
     cin>>r1>>c1>>r2>>c2;
     int sum=0; 
     for(int i=r1;i<=r2;i++){
     	for(int j=c1;j<=c2;j++){
     		sum+=arr[i][j];
     	}
     }
     cout<<sum;


    return 0;
}