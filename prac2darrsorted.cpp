#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<vector<int>>&arr){
    int n=arr.size();
    int m=arr[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
            if(arr[i][j]>arr[i][j+1])
             return false;
        }
    }
    return true;
}
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     vector<vector<int>>arr={{2,3,4},{5,6,7}};
     if(sorted(arr));
      cout<<"sorted";
}