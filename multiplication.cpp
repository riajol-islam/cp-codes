#include<bits/stdc++.h>
using namespace std;
void updatearr(vector<int>&arr){
    int n=arr.size();
    int prev=1;
    for(int i=0;i<n;i++){
        int current=arr[i];
        int next=(i==n-1)? 1:arr[i+1];
        arr[i]=prev*current*next;
        prev=current;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>arr={2,4,5};
    updatearr(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}