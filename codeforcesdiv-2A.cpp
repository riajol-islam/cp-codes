#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    int odd_a = 0, even_a = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 != 0) odd_a++;
        else even_a++;
    }
    
    int odd_b = 0, even_b = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 != 0) odd_b++;
        else even_b++;
    }
    
    if (k % 2 == 0) {
         
        if (odd_a >= odd_b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
         
        if (even_a >= even_b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
