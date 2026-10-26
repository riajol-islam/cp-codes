#include<bits/stdc++.h>
using namespace std;
void pyramid(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
             cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=5;
    pyramid(n);
}