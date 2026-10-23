#include<bits/stdc++.h>
using namespace std;
void reverserow (vector<vector<int>>&arr){
    for(int i=0;i<arr.size();i++){
        int left =0;
        int right=arr[0].size()-1;
        while(left<right){
            swap(arr[i][left],arr[i][right]);
            left++;
            right--;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>>arr={{2,4,5},{5,6,7}};
    reverserow(arr);
    int n=arr.size();
    int m=arr[0].size(); 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}