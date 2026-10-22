#include<bits/stdc++.h>
using namespace std;
void upadtearr(vector<int>&arr){
    int prev=1;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int current=arr[i];
        int next=(i==n-1)?1:arr[i+1];
        arr[i]=next*prev*current;
        prev=current ;
    }
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
        upadtearr(arr);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}