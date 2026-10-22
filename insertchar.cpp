#include<bits/stdc++.h>
using namespace std;
string insertchar(string &s,char c,int pos){
  s.insert(s.begin()+pos,c);
  return s;  
}
int main(){
    string s="riajol";
    cout<<insertchar(s,'m',3);
}