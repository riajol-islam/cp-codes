#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y, m;
        scanf("%d %d %d", &x, &y, &m);
        char buf[64];
        scanf("%s", buf);
        string s(buf);

        const int N = 105;
        vector<vector<char>> name(N, vector<char>(N, 0));
        name[x][y] = 1;
        int best = x + y;

        for (char ch : s) {
            vector<vector<char>> nxt(N, vector<char>(N, 0));
            for (int a = 0; a < N; a++) {
                for (int b = 0; b < N; b++) {
                    if (!name[a][b]) continue;
                    if (a == 0 && b == 0) {
                        nxt[0][0] = 1;
                        continue;
                    }
                    if (ch == '+') {
                        if (a > 0) nxt[a - 1][b + 1] = 1; 
                        if (b > 0) nxt[a][b + 1] = 1;      
                    } else {
                        if (b > 0) nxt[a + 1][b - 1] = 1;  
                        if (a > 0) nxt[a - 1][b] = 1;      
                    }
                }
            }
            name = nxt;
            for (int a = 0; a < N; a++)
                for (int b = 0; b < N; b++)
                    if (name[a][b]) best = max(best, a + b);
        }
        printf("%d\n", best);
    }
    return 0;
}