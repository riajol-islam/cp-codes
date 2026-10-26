#include<bits/stdc++.h>
using namespace std;

bool sum(int n){
   
    for(int i=1;i<n;i++){
          int sum=0;
         for(int j=i;j<n;j++){
           
            sum+=j;
            if(sum==n && j>i){
                return true;
            }
            if(sum>n){
                break;
            }
         }
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n= 10;
    if(sum(n))
      cout<<"true";
    else
      cout<<"false";
}