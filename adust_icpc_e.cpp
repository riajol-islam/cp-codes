#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        while (q--) {
            int l, r, m;
            cin >> l >> r >> m;

            int ans_i = -1, ans_j = -1;

            for (int i = l; i <= r; i++) {
                ll x = a[i] % m;

                for (int j = l; j < i; j++) {
                    ll y = a[j] % m;

                    if ((x * y * (x * x - y * y)) % m == 0) {
                        ans_i = j;
                        ans_j = i;
                        break;
                    }
                }

                if (ans_i != -1) {
                    break;
                }
            }

            if (ans_i != -1) {
                cout << ans_i << " " << ans_j << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }

    return 0;
}