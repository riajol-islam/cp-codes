#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==1|| n==0)
     return 1;
 return n*fact(n-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=5;
    cout<<fact(n);
    return 0;
}