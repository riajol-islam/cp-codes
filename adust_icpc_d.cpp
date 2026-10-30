#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        string s;
        cin>>n>>s;

        vector<int> r;
        r.reserve(n);
        int l = 1;
        for(int i = 1; i < n; i++) {
            if(s[i] == s[i - 1]) {
                l++;
            } else {
                r.push_back(l);
                l = 1;
            }
        }
        r.push_back(l);

        bool ans = r.size() <= 2;
        if(r.size() == 3) {
            ans = r[1] >= r[0] + r[2];
        }

        cout<<(ans ? "YES" : "NO")<<endl;
    }
    return 0;
}
