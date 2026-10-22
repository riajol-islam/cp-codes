#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<int>&arr){
return (is_sorted(arr.begin(),arr.end()));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(sorted(arr)){
        cout<<"sorted";
    }
    else{
        cout<<"unsorted";
        }



}