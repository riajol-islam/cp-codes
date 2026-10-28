#include<bits/stdc++.h>
using namespace std;
 bool prime (int n){
    if(n<=1)
     return false;
    for(int i=2;i<n-1;i++){
        if(n%i==0)
        return false;
    }
    return true ;
 }
 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m=30;
    if(prime(m)){
        cout<<"true";
    }
    else 
     cout<<"false";
    return 0;
 }