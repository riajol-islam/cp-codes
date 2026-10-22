#include<bits/stdc++.h>
using namespace std;
void reversearr(vector<int>&arr){
    int left=0;
    int right=arr.size()-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>arr={3,4,5,6};
    reversearr(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}