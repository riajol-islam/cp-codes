#include<bits/stdc++.h>
using namespace std;

bool substring(string &text,string &pat){
    if(text.find(pat)!=string::npos){
        return true;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string text="riajol";
    string pat="j";
    if(substring(text,pat)){
        cout<<"found";
    }else{
        cout<<"error!";     
    }
}