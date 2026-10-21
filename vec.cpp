#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(20);
    arr.push_back(39);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    int n;
    cin>>n;
    vector<int>arr2(n);
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i];
    }
}