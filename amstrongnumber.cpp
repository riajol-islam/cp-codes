#include<bits/stdc++.h>
using namespace std;
bool armstrong(int n){
    string number=to_string(n);
    n=number.length();
    int sum=0;
    for(char i :number)
       sum=sum+(int)pow((i-'0'),n);
    if(sum==stoi(number))
     return true ;
    else 
     return false;
}
int main(){
    int n=153;
    if(armstrong(n))
     cout<<"true";
    else
     cout<<"false";
  return 0;
}