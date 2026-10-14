#include<bits/stdc++.h>
using namespace std;
int linear(vector<int>& arr,int k){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==k){
        return i;
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

        }int k;
        cin>>k;
         
        cout<<linear(arr,k);

    }