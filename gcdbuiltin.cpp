#include<bits/stdc++.h>
using namespace std;
int gcd(int n,int m){
    return __gcd(n,m);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=40;
    int m=4;
    cout<<gcd(n,m);
    return 0;
}