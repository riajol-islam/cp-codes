#include<bits/stdc++.h>
using namespace std;
int sortedroted(vector<int>&arr,int k){
    int low=0;
     int high=arr.size()-1;
     while(low<=high){
       int  mid=low+(high-low)/2;
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
            if(k>arr[mid]&&k<=arr[high]){
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
    vector<int>arr={4,5,6,7,0,1,2};
    int k=0;
    cout<<sortedroted(arr,k);
}