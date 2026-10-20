#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&arr,int mid,int k){
    int totalhours=0;
    for(int i=0;i<arr.size();i++){
        totalhours+=(arr[i]+mid-1)/mid;
    }
    return totalhours<=k;
}
int kokoeat(vector<int>&arr,int k){
    int low=1;
    int high=*max_element(arr.begin(),arr.end());
    int res=high;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(check(arr,mid,k)){
            res=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }

    }
    return res;
}
int main(){
    vector<int>arr={5, 10, 3};
    int k=4;
    cout<<kokoeat(arr,k);
}