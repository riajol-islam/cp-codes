#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);

	
}

 #include<bits/stdc++.h>
 using namespace std;
 
  bool palindrome(string s){
        int start=0;
        int end=s.length()-1;
        if(s[start]!=s[end]) return false;
        start++;
        end--;
        return true;
      }
      int main() {
 #ifndef ONLINE_JUDGE
     freopen("inputf.txt", "r", stdin);
     freopen("outputf.txt", "w", stdout);
 #endif
 string s;
 if(!(cin>>s)) return 0;
 if(palindrome(s)) cout<<"palindrome";
 else cout<<"Not palindrome";
 
     return 0;
 }