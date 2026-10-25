#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int sum=n*(n+1)/2;
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=8;
    cout<<sum(n);
    return 0;
    
}