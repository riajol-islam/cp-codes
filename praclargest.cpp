#include<bits/stdc++.h>
using namespace std;
int largest(vector<int> &arr){
    int n=arr.size();
    int max=arr[0];
    for(int i=0;i<n;i++)
{
    if(arr[i]>max){
        max=arr[i];
        
}
}
return max;
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
    cout<<largest(arr);
}