 #include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int n, m, q;
    if (!(cin >> n >> m >> q)) return;

    // Constraints validation
    if (m < 1 || m > n || n > 200000) {
        return;
    }

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    // Process each query independently
    for (int qi = 0; qi < q; ++qi) {
        int i;
        long long v;
        cin >> i >> v;

        // Temporarily update a[i]
        a[i] += v;

        // Calculate the number of special partitions modulo 10^9 + 7
        // [Add the optimal segment sum matching/counting logic here based on m]
        long long ans = 0; 

        // Revert a[i] back to its original state for independence
        a[i] -= v;

        cout << ans << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}