#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int n;
     cin>>n;
     int arr[100001];
     for(int i=1;i<=4*n-1;i++){
     	cin>>arr[i];
     }
     int f[n + 1];
     for(int i=1;i<=n;i++){
     	  f[i]=0;
     }
     for(int i=1;i<=4*n-1;i++){
     	f[arr[i]]++;
     }
     int ans=0;
     for(int i=1;i<=n;i++){
     	if(f[i]==3){
     		  ans=i;
     		break;
     	}
     }
     cout<<ans;

    return 0;
}