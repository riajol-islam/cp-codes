#include <bits/stdc++.h>

using namespace std;

const int MOD = 998244353;

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<int> a(n);
    int max_a = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        max_a = max(max_a, a[i]);
    }

    // Fast lookup for elements in A
    vector<bool> in_A(max_a + 1, false);
    for (int x : a) {
        in_A[x] = true;
    }

     
    vector<vector<long long>> dp(8, vector<long long>(4, 0));
    dp[0][0] = 1; // Base state for v > max_a

    for (int v = max_a; v >= 1; --v) {
        vector<vector<long long>> next_dp(8, vector<long long>(4, 0));
        bool is_in_A = in_A[v];

        for (int mask = 0; mask < 8; ++mask) {
            for (int cnt = 0; cnt <= 3; ++cnt) {
                long long ways = dp[mask][cnt];
                if (ways == 0) continue;

                // Choice 1: c = 0 (v not in S)
                {
                    int new_mask = mask >> 1;
                    int new_cnt = cnt;
                    next_dp[new_mask][new_cnt] = (next_dp[new_mask][new_cnt] + ways) % MOD;
                }

                // Choice 2: c = 1 (v in S, only allowed if v is in A)
                if (is_in_A) {
                    int popcnt = __builtin_popcount(mask);
                    int new_cnt = cnt;
                    if (popcnt != 2) {
                        new_cnt = min(3, cnt + 1);
                    }
                    int new_mask = (mask >> 1) | 4;
                    next_dp[new_mask][new_cnt] = (next_dp[new_mask][new_cnt] + ways) % MOD;
                }
            }
        }
        dp = move(next_dp);
    }

     
    long long total = 0;
    for (int mask = 0; mask < 8; ++mask) {
        for (int cnt = 0; cnt <= 2; ++cnt) {
            total = (total + dp[mask][cnt]) % MOD;
        }
    }

    
    total = (total - 1 + MOD) % MOD;

    cout << total << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}