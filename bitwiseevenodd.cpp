#include<bits/stdc++.h>
using namespace std;
void evenodd(int n){
    string result=((n&1)==0)?"even":"odd";
    cout<<result<<" ";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    vector<int>arr={2,3,5,7,8};
    for(int i=0;i<arr.size();i++){
        n=arr[i];
        evenodd(n);
         
    }
}