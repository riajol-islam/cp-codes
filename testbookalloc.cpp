#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&arr,int k,long long pagelimit){
    int cnt=1;
    long long pagesum=0;
    for(int i=0;i<arr.size();i++){
        if(pagesum+arr[i]>pagelimit){
            pagesum=arr[i];
            cnt++;
        }
        else{
            pagesum+=arr[i];
        }
    }
    return (cnt<=k);
}
int findpages(vector<int>&arr,int k){
    if(k>arr.size())
     return-1;
    long long low=*max_element(arr.begin(),arr.end());
    long long high=accumulate(arr.begin(),arr.end(),0ll);
    int res=-1;
    while(low<=high){
        long long  mid=low+(high-low)/2;
        if(check(arr,k,mid)){
            res=(int)mid;
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
    int k=2;
    vector<int>arr={12,34,67,90};
    cout<<findpages(arr,k);
    return 0;
}