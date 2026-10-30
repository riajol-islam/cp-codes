#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll a, b;
        cin >> n >> a >> b;

        vector<ll> x(n), y(n), w(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> y[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> w[i];
        }

        vector<pair<pair<ll, ll>, ll>> v;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ll dx = x[j] - a * x[i] + b * y[i];
                ll dy = y[j] - b * x[i] - a * y[i];

                ll cx = (1 - a) * dx - b * dy;
                ll cy = b * dx + (1 - a) * dy;

                v.push_back({{cx, cy}, w[i]});
            }
        }

        sort(v.begin(), v.end());

        ll ans = 0, sum = 0;
        for (int i = 0; i < (int)v.size(); i++) {
            if (i > 0 && v[i].first == v[i - 1].first) {
                sum += v[i].second;
            } else {
                sum = v[i].second;
            }
            ans = max(ans, sum);
        }

        cout << ans << "\n";
    }
    return 0;
}