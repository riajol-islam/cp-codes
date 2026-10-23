#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<vector<int>>&arr){
    int n=arr.size();
    int m=arr[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        if(j!=m-1){
            if(arr[i][j]>arr[i][j+1])
            return false;
        }
        else if(i!=n-1){
            if(arr[i][j]>arr[i+1][0]){
                 return false;
            }
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>>arr={{1,2,3},{4,5,6}};
    if(sorted(arr)){
        cout<<"sorted";
    }
    else{
        cout<<"unsorted";
    }
    return 0;
}