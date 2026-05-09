#include<bits/stdc++.h>
using namespace std;

void myreverse(int arr[],int n){
	int start =1;
	int end=n;
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int n;
     cin>>n;
     int arr[n+1];
      for(int i=1;i<=n;i++){
      	cin>>arr[i];
      }
      myreverse(arr,n);

      for(int i=1;i<=n;i++){
      	cout<<arr[i]<<" ";
      }

    return 0;
}