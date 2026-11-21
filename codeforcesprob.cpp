 #include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        long long x;
        scanf("%d %lld", &n, &x);
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            long long a;
            scanf("%lld", &a);
            arr[i] = (a + x - 1) / x;
        }
        sort(arr.begin(), arr.end());
         
        long long riajol= 0;
        for (int i = 0; i < n - 1; i++) {
            riajol = max(arr[i], riajol + 1);
        }
        printf("%lld\n", riajol - (n - 1));
    }
    return 0;
}