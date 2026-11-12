 #include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    
    int switches = (s[0] == 'B' ? 1 : 0);
    
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            switches++;
        }
    }
    
    cout << switches << "\n";
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