  #include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int a, b;  
        long long p;
        cin >> a >> b >> p;

        vector<long long> v(a);
        long long ans = 0;
        for (int i = 0; i < a; ++i) {
            cin >> v[i];
            ans += v[i];
        }

        sort(v.begin(), v.end());

        for (int i = 0; i + b <= a; i += b) {
            long long whitesum
             = 0;
            for (int j = i; j < i + b; ++j) {
                whitesum += v[j];
            }
            if (p > whitesum) {
                ans += (p - whitesum);
            } else {
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}