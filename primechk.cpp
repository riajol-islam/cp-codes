
#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;

    }
    return true;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
int x;
if(!(cin>>x)) return 0;
int arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
    if(isprime(arr[i])) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
     

    return 0;
}