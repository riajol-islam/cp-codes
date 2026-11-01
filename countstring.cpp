#include<bits/stdc++.h>
using namespace std;
int count(int n){
    n=abs(n);
    string s=to_string(n);
    return s.length();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=123456;
    cout<<count(n);
    return 0;
}