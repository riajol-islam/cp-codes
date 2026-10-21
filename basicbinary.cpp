#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>&arr,int k){
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k)
         return mid;
     if(k>arr[mid]){
        low=mid+1;

     }
     else {
        high=mid-1;
     }
    }
    return-1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n;
     cin>>n;
     
     vector<int>arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int k;
     cin>>k;
     cout<<binarysearch(arr,k);
}