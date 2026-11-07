#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    long long ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, abs(a[i] - a[i + 1]));
    }
 
    vector<long long> pref(n, 0), suff(n, 0);
    for (int i = 0; i < n - 1; i++) pref[i + 1] = max(pref[i], abs(a[i] - a[i + 1]));
    for (int i = n - 2; i >= 0; i--) suff[i] = max(suff[i + 1], abs(a[i] - a[i + 1]));

   
    for (int i = 0; i < n; i++) {
        long long cur = 0;
        if (i > 0) cur = max(cur, pref[i - 1]);
        if (i < n - 2) cur = max(cur, suff[i + 1]);
        if (i > 0) cur = max(cur, abs(a[i - 1] - 2 * a[i]));
        if (i < n - 1) cur = max(cur, abs(2 * a[i] - a[i + 1]));
        ans = min(ans, cur);
    }

    // 2. Length-2 segments [i, i+1] reversed & doubled
    for (int i = 0; i < n - 1; i++) {
        long long cur = 2 * abs(a[i] - a[i + 1]);
        if (i > 0) cur = max(cur, pref[i - 1]);
        if (i < n - 2) cur = max(cur, suff[i + 2]);
        
        if (i > 0) cur = max(cur, abs(a[i - 1] - 2 * a[i + 1]));
        if (i < n - 2) cur = max(cur, abs(2 * a[i] - a[i + 2]));
        
        ans = min(ans, cur);
    }

   
    for (int r = 0; r < n - 1; r++) {
        long long cur = 2 * pref[r];
        cur = max(cur, abs(2 * a[0] - a[r + 1]));
        if (r < n - 2) cur = max(cur, suff[r + 1]);
        ans = min(ans, cur);
    }

 
    for (int l = 1; l < n; l++) {
        long long cur = 2 * suff[l];
        cur = max(cur, abs(a[l - 1] - 2 * a[n - 1]));
        if (l > 1) cur = max(cur, pref[l - 1]);
        ans = min(ans, cur);
    }

    
    ans = min(ans, 2 * pref[n - 1]);

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