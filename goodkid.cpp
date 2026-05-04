#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int t;
     cin>>t;
     while(t--){
     	int n;
     	cin>>n;
     	int arr[n];
     	for(int i=0;i<n;i++){
     		cin>>arr[i];
     	}
     	sort(arr,arr+n);
     	arr[0]++;
     	long long product=1;
     	for(int i=0;i<n;i++){
     		product*=arr[i];
     	}
     	cout<<product<<"\n";
     }

    return 0;
}