#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-1-i]);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>arr={3,4,5,6,7};
    reverse(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}