#include<bits/stdc++.h>
using namespace std;
void updatearr(vector<int>&arr){
    int prev=1;
    int n=arr.size();
    for(int i=0;i<arr.size();i++){
        int next=(i==n-1)?1:arr[i+1];
        int current=arr[i];
        arr[i]=next*prev*current;
        prev=current;

    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>arr={2,4,5};
    updatearr(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}