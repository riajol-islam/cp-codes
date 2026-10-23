#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<int>&arr){
    return is_sorted(arr.begin(),arr.end());

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>arr={3,4,6,7};
    if(sorted(arr))
     cout<<"sorted";
    else
     cout<<"unsorted";
}