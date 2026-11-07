#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

        
    cout << "? 1 " << n << endl;
    int c;
    cin >> c;

    if (c == 0 || c == n) {
        cout << "! NO" << endl;
        return;
    }

    
    cout << "? 1 " << c << endl;
    int count_c;
    cin >> count_c;
 
    
    if (count_c < c) {
        cout << "! YES" << endl;
    } else {
        cout << "! NO" << endl;
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