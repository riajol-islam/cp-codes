#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int> & arr,int k){
 int index=lower_bound(arr.begin(),arr.end(),k)-arr.begin();
 return index;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>arr={2, 5,12, 16, 23, 38, 56, 72, 91};
    int k=8;
    cout<<lowerbound(arr,k);
    return 0;
}