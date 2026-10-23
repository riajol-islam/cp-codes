#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>arr={2,3,4,5};
     if(sorted(arr))
      cout<<"sorted";
    else
     cout<<"unsorted";
    return 0;
}