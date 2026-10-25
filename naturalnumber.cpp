#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=8;
    cout<<sum(8);
    return 0;
}