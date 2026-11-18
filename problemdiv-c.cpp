 #include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> c(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> c[i];
    }
    
    vector<int> prm(n + 1, 0);
    bool possible = true;
    
    for (int x = 1; x <= n; ++x) {
        long long pos = c[x] + n - x + 1;
        if (pos < 1 || pos > n || prm[pos] != 0) {
            possible = false;
            break;
        }
        prm[pos] = x;
    }
    
    if (!possible) {
        cout << -1 << "\n";
        return;
    }
    
    for (int i = 1; i <= n; ++i) {
        cout << prm[i] << (i == n ? "" : " ");
    }
    cout << "\n";
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