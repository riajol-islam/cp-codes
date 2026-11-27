#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int t;
    cin >> t;
    while (t--) {
        int b;
        string s;
        cin >> b >> s;

        if (b % 2 == 1) {
            cout << "NO\n";
            continue;
        }

        bool alternative = true;
        for (int i = 1; i < b; ++i) {
            if (s[i] == s[i - 1]) {
                alternative = false;
                break;
            }
        }

        cout << (alternative ? "NO\n" : "YES\n");
    }

    return 0;
}