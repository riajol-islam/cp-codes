#include<bits/stdc++.h>
using namespace std;
int countdigit(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=123456;
    cout<<countdigit(n);
    cout<<20/10;
    return 0;

    
}