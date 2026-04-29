   #include<bits/stdc++.h>
using namespace std;
int binarysearch(std::vector<int>arr,int st,int end, int target){
    if(st>end){
        return-1;
    }
    int mid=(st+end) /2;
    if(arr[mid]==target) {
        return mid ;
    }
    else if( arr[mid]>target){
        return binarysearch(arr,0,mid-1,target);
    }else{
        return binarysearch(arr,mid+1,end,target);
    }
}
int main(){
    vector<int>arr={1,2,3,4,5,6,7,11,22,34,55};
    int target=7;
    cout<<binarysearch(arr,0,arr.size()-1,target);
}