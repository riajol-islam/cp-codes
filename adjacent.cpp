 #include<bits/stdc++.h>
 using namespace std;
 
 int main() {
 #ifndef ONLINE_JUDGE
     freopen("inputf.txt", "r", stdin);
     freopen("outputf.txt", "w", stdout);
 #endif
 
      int a, b;
    cin >> a >> b;

    
    if (b == a + 1 && a % 3 != 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

 
     return 0;
 }