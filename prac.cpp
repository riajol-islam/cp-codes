#include<bits/stdc++.h>
using namespace std;

int largest(vector<int>& arr){
    int n=arr.size();
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];

        }
    }
    return max;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>arr={30,19,40};
    cout<<largest(arr);
    
    return 0;
}