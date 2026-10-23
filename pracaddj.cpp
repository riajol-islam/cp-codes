#include<bits/stdc++.h>
using namespace std;
 void multiplication(vector<int>&arr){
    int prev=1;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int current =arr[i];
        int next=(i==n-1)?1:arr[i+1];
        arr[i]=prev * current * next;
        prev=current;
    }
 }
 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     vector<int>arr={3,4,5};
     multiplication(arr);
      for(int x:arr){
        cout<<x<<" ";
      }
 }