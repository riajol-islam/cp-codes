#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&arr,int k,int mid){
    long long totalhours=0;
    for(int i=0;i<arr.size();i++){
        totalhours+=(arr[i]+mid-1)/mid;

    }
    return (totalhours<=k);
}
int kokoeat (vector<int>&arr,int k){
    
    int high=*max_element(arr.begin(),arr.end());
    int low=1;
    int res=high;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(check(arr,k,mid)){
            res=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k=4;
    vector<int>arr={5,10,3};
    cout<<kokoeat(arr,k);
    return 0;
}