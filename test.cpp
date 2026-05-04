#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int n;
     cin>>n;
     int arr[n];
     for(int i=1;i<n;i++){
     	cin>>arr[i];

     }
     int present[n+1];
     for(int i=1;i<=n;i++){
     	present[i]=0;

     }
     for(int i=1;i<n;i++){
     	present[arr[i]]++;
     } int ans;
     for(int i=1;i<=n;i++){
     	if(present[i]==0){
     		ans=i;
     		break;
     	}
     }
     cout<<ans;

    return 0;
}