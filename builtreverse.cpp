#include<bits/stdc++.h>
using namespace std;

 
int main(){
    vector<int>arr={3,4,5,6};
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){

        cout<<arr[i]<<" ";
    }
}