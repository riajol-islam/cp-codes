#include<bits/stdc++.h>
using namespace std;
int frequency(vector<int>&arr,int target){
     int upper=upper_bound(arr.begin(),arr.end(),target)-arr.begin();
     int lower=lower_bound(arr.begin(),arr.end(),target)-arr.begin();
     return upper-lower;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = frequency(arr, target);
    cout << result << endl;
    return 0;
}