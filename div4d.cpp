#include <bits/stdc++.h>
using namespace std;

int main() {
     
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> x(n), y(n);
        for (int i = 0; i < n; ++i) cin >> x[i];
        for (int i = 0; i < n; ++i) cin >> y[i];

        long long cp = 0;  
        long long dp1 = 0;  

        for (int i = n - 1; i >= 0; --i) {
            long long sell = (x[i] - y[i]) + cp;
            long long skip0 = dp1;

            long long buy1 = (y[i] - x[i]) + dp1;
            long long skip1 = cp;

            long long next_cp = max(sell, skip0);
            long long next_dp1 = min(buy1, skip1);

            cp = next_cp;
            dp1 = next_dp1;
        }

        if (cp > 0) {
            cout << "Sunny\n";
        } else if (cp < 0) {
            cout << "Aubrey\n";
        } else {
            cout << "Draw\n";
        }
    }

    return 0;
}