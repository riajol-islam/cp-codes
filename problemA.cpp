#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long l, r;
    cin >> l >> r;
    
    long long n = r - l + 1;
    long long totalsum = (l + r) * n / 2;
    
    
    if (totalsum >= l && totalsum <= r) {
        cout << 0 <<endl;
    }  
    else if (l > 0 || r < 0) {
        cout << r - l <<endl;
    } 
     
    else {
        cout << abs(l + r) - 1 <<endl;
    }
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