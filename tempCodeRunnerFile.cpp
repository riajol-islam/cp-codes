#include<bits/stdc++.h>
 using namespace std;
 int sortedroted(vector<int>&arr,int k){
    int low=0,high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]>=arr[low]){
            if(k>=arr[low]&&k<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(k>arr[mid]&& k<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
return -1;
 }
 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=sortedroted(arr,k);
    cout<<ans<<endl;
 }