#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     string n;
     cin>>n;
     int vowels=0,consonants=0;
     for(int i=0;i<n.length();i++){
     	char ch = tolower(n[i]);
     	if(ch >= 'a' && ch <= 'z') { 
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                
                vowels++;
            } else {
                consonants++;
            }
        }
    }
     cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}