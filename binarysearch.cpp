#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> & arr,int k){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>=k){
            return i;
        }
         
    }
    return arr.size();
   
}
int main(){
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    vector<int>arr={2, 5,12, 16, 23, 38, 56, 72, 91};
    int k=8;
    cout<<binarysearch(arr,k);
    return 0;
}