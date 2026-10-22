#include<bits/stdc++.h>
using namespace std;
 int main(){
    string str="riajol";
    char sear='p';
    bool found =false;
    for(int i=0;i<str.size();i++){
        if(str[i]==sear){
            cout<<i;
            found =true;
            break;

        }
    }
    if(!found){
        cout<<-1;
    }
    return 0;
 }