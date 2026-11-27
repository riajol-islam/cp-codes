 #include <bits/stdc++.h>
using namespace std;

int main() {
  
    int t;
    cin >> t;
    while (t--) {
        long long b, c, d;
        cin >> b >> c >> d; // b = l, c = a, d = b

        long long ga = gcd(c, b);
        long long gb = gcd(d, b);
        long long g = lcm(ga, gb);

        cout << (b / g) << '\n';
    }

    return 0;
}