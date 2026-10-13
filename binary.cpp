#include<bits/stdc++.h>
using namespace std;
int binaerysearch(vector<int> &arr,int k){
    int left=0;
    int right=arr.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>arr={2, 5,12, 16, 23, 38, 56, 72, 91};
    int k=8;
    cout<<binaerysearch(arr,k);
    return 0;
}