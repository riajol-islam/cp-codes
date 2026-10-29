#include<bits/stdc++.h>

using namespace std;

const long long MOD = 998244353;

int main() {
    // Fast I/O is crucial for n, q <= 10^6
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    // Precompute repunit[p] = 11...1 (p ones) % MOD
    vector<long long> repunit(n + 1, 0);
    for (int p = 1; p <= n; p++) {
        repunit[p] = (repunit[p - 1] * 10 + 1) % MOD;
    }

    // D[p] stores the p-th digit from the right (1-indexed)
    vector<int> D(n + 1);
    long long digit_sum = 0;
    int non_zero_cnt = 0;
    priority_queue<int, vector<int>, greater<int>> min_pq;

    for (int i = 0; i < n; i++) {
        int p = n - i; // position from the right
        D[p] = s[i] - '0';
        digit_sum += D[p];
        if (D[p] > 0) {
            non_zero_cnt++;
            min_pq.push(p);
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int p, d;
        cin >> p >> d;

        // Update digit at position p
        if (D[p] != d) {
            digit_sum += d - D[p];
            if (D[p] == 0 && d > 0) {
                non_zero_cnt++;
                min_pq.push(p);
            } else if (D[p] > 0 && d == 0) {
                non_zero_cnt--;
            }
            D[p] = d;
        }

        // Case 1: The number is 0
        if (non_zero_cnt == 0) {
            cout << 0 << "\n";
            continue;
        }

        // Clean up stale zeros at the top of the min-heap
        while (!min_pq.empty() && D[min_pq.top()] == 0) {
            min_pq.pop();
        }
        int p_min = min_pq.top();

        // Determine multiplier C (2 if divisible by 9, else 1)
        long long C = (digit_sum % 9 == 0) ? 2 : 1;
        long long ans = (C * repunit[p_min]) % MOD;

        // Subtract 1 if 1 <= a_i <= 9 (only 1 non-zero digit, located at p = 1)
        if (non_zero_cnt == 1 && D[1] > 0) {
            ans = (ans - 1 + MOD) % MOD;
        }

        cout << ans << "\n";
    }

    return 0;
}
 