#include<bits/stdc++.h>
using namespace std;
 bool isPalindrome(int n){
    string s=to_string(n);
    int l=0,r=s.length()-1;
    while(l<r){
        if(s[l]!=s[r])
         return false;
        l++;
        r--;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=12321;
    if(isPalindrome(n))
     cout<<"true";
    else
     cout<<"false";
    return 0;
}