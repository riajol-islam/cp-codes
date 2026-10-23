#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr){
    int n=arr.size();
    vector<int>temp(n);
     for(int i=0;i<n;i++){
        temp[i]=arr[n-i-1];
     }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>arr={3,4,5};
    reverse(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}