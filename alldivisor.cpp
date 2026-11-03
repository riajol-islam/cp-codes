#include<bits/stdc++.h>
using namespace std;
 vec<int> alldivisor(int n){
    vec<int> v;
    for(int i=1;i<=n;i++){
        if(n%i==0)
         v.push_back(i);
    }
    return v;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=12;
    vec<int> v=alldivisor(n);
    for(int i:v)
     cout<<i<<" ";
    return 0;
}