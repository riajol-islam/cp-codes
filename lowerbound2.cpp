#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int>&arr,int k){
    int n=arr.size();
     for(int i=0;i<n;i++){
        if(arr[i]>=k){
            return i;

        }   
      
        
     }
     return n;
     int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = lowerbound(arr, k);
    cout << result << endl;
    return 0;
     }