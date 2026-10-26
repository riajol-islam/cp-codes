#include<bits/stdc++.h>
using namespace std;
void triangle(int n){
    int val=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<val++<<" ";
           
    }
     cout<<endl;
        }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=6;
    triangle(n);
    return 0;

}