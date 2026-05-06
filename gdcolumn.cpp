#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int x;
     cin>>x;
     int n;
     cin>>n;
     int arr[n+1][n+1];
     for(int i=1;i<=n;i++){
     	for(int j=1;j<=n;j++){
     		cin>>arr[i][j];
     	}
     }
     bool isgood=false;
     for(int j=1;j<=n;j++){
     	for(int i=1;i<=n;i++){
     		if(arr[i][j]==x){
     			 isgood=true;
     			break;
     		}
     	}
     	if(isgood){
     		cout<<"YES"<<endl;

     }
     else{
     	cout<<"NO"<<endl;
     }
     	}

    return 0;
}