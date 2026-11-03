#include<bits/stdc++.h>
using namespace std;
void butterfly(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i+j==n+1)
             cout<<"*";
            else
             cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=5;
    butterfly(n);
    return 0;
}
