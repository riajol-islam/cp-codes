#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int h,w;
     cin>>h>>w;
     int arr[h+1][w+1];
     for(int i=1;i<=h;i++){
     	for(int j=1;j<=w;j++){
     		cin>>arr[i][j];
     	}
     }
     for(int j=1;j<=3;j++){
     	for(int i=1;i<=h;i++){
     		cout<<arr[i][j]<<" ";
     	}
     	cout<<endl;
     }


    return 0;
}