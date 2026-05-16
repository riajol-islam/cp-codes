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
     for(int i=0;i<n;i++){
     	cin>>arr[i];
     }
     reverse(arr,arr+n);
     for(int i=0;i<n;i++){
     	cout<<arr[i]<<" ";
     }

    return 0;
}