#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     #include<stdio.h>
 

    int t;
    scanf("%d", & t);

    while (t--) {
        int n, k;
        scanf("%d%d", & n, & k);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", & arr[i]);
        }

        int flag = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == k) {
                flag = 1;
                break;
            }
        }

        if (flag == 1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
 