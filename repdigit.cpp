 #include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int n;
    if (!(cin >> n)) return 0; // ইনপুট না থাকলে বন্ধ হবে

    for (int j = 1; j <= n; j++) {
        int val;
        cin >> val;
        
        int temp = val;
        int last_digit = temp % 10;
        bool is_repdigit = true;

        while (temp > 0) {
            if (temp % 10 != last_digit) {
                is_repdigit = false;
                break;
            }
            temp /= 10;
        }

        if (is_repdigit) {
            cout << val << " is a repdigit" << endl;
        } else {
            cout << val << " is not a repdigit" << endl;
        }
    }

    return 0;
}