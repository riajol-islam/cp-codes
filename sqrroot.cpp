#include<bits/stdc++.h>
using namespace std;
int findroot(int n){
    int res=1;
    while(res*res<=n){
        res++;
    }
    return res-1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<findroot(n);
    return 0;
}
