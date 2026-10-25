#include<bits/stdc++.h>
using namespace std;
string evenodd(int n){
    string result=(n%2==0)?"even":"odd";
    return result;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=2;
    cout<<evenodd(n);
    return 0;
}