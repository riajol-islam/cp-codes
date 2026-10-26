#include<bits/stdc++.h>
using namespace std;
bool sum(int n){
    if(n==1)
     return false;
    if((n&(n-1))==0){
        return false;

    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=7;
    if(sum(n))
     cout<<"true";
    else
     cout<<"false";
}