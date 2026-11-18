 #include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> h(n);
    long long max_h = 0, min_h = 2e9;
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
        max_h = max(max_h, h[i]);
        min_h = min(min_h, h[i]);
    }
    
    auto can = [&](long long D) -> bool {
        vector<long long> cur = h;
        
         
        for (int step = 0; step < 2 * n; ++step) {
            int i = step % n;
            int nxt = (i + 1) % n;
            if (cur[nxt] < cur[i] - D) {
                cur[nxt] = cur[i] - D;
            }
        }
        
       
        for (int step = 2 * n - 1; step >= 0; --step) {
            int i = step % n;
            int nxt = (i + 1) % n;
            if (cur[i] < cur[nxt] - D) {
                cur[i] = cur[nxt] - D;
            }
        }
        
         
        long long needed = 0;
        for (int i = 0; i < n; ++i) {
            long long diff = cur[i] - h[i];
            if (k - needed < diff) return false;
            needed += diff;
        }
        return true;
    };
    
    long long low = 0, high = max_h - min_h, ans = high;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (can(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    cout << ans << "\n";
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