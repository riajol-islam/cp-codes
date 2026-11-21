#include <bits/stdc++.h>

using namespace std;

long long damage(long long c, long long k) {
    long long burst = c + 1;
    if (k <= burst) {
        return k * (c + 1) - (k * (k - 1)) / 2;
    }
    long long full_burst = (burst * (burst + 1)) / 2;
    return full_burst + (k - burst);
}

void solve() {
    long long x;
    cin >> x;

    long long ans = x;  
    for (long long c = 0; c <= 200; ++c) {
        long long lo = 1, hi = x, best_k = x;
        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            if (damage(c, mid) >= x) {
                best_k = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        ans = min(ans, c + best_k);
    }

    cout << ans << "\n";
}

int main() {
     

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}