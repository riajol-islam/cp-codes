#include<bits/stdc++.h>
using namespace std;
int largest(vector<int> &arr){
    return *max_element(arr.begin(),arr.end());
}

int lowest(vector<int> &arr){
    return *min_element(arr.begin(),arr.end());
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
      cout<<largest(arr)<<endl;
     cout<<lowest(arr);
     return 0;


}

