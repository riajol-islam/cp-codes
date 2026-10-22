#include<bits/stdc++.h>
using namespace std;
void reverseorder(vector<int>&arr){
    int n=arr.size();
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        temp[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>arr={3,5,6,7,8};
    reverseorder(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";  
     }
    
}