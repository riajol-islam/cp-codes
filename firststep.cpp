#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int n;
    if (!(cin >> n)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int current = 1;
    int maxl = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            current++;
        } else {
            current = 1;
        }
        maxl = max(maxl, current);
    }

    cout << maxl << "\n";

    return 0;
}