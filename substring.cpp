#include<bits/stdc++.h>
using namespace std;
int firstccur( string &txt,string &pat){
    size_t index=txt.find(pat);
    if(index!=string::npos)
      return index;

return -1;

}
bool substring( string &txt,string &pat){
    if(txt.find(pat)!=string::npos){
        return true;
    }
    return false;
}
int main(){
    string txt="Riajol";
    string pat="jol";
    cout<<firstccur(txt,pat);
    cout<<substring(txt,pat);
    return 0;
}