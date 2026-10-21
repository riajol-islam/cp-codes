#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&arr,int k,int dist){
    int cnt=1;
    int prev=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]-prev>=dist){
            prev=arr[i];
            cnt++;
        }
    }
    return (cnt>=k);
}
int aggressivecow(vector<int>&arr,int k){
    sort(arr.begin(),arr.end());
    int res=0;
    int low=1;
    int high=arr.back()-arr[0];
    while(low<=high){
        int mid=low+(high-low)/2;
        if(check(arr,k,mid)){
            res=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    vector<int>arr={1, 2, 4, 8, 9};
    int k=3;
    cin.tie(NULL);
    cout<<aggressivecow(arr,k);
}
