 #include<bits/stdc++.h>
 using namespace std;
 
 int main() {
 #ifndef ONLINE_JUDGE
     freopen("inputf.txt", "r", stdin);
     freopen("outputf.txt", "w", stdout);
 #endif
 
     
     #include <bits/stdc++.h>
using namespace std;

 
    int n;
    if(!(cin >> n)) return 0;

    vector<vector<int>> ans;
    
     
    for (int x = 0; x <= n; x++) {
        for (int y = 0; y <= n; y++) {
            for (int z = 0; z <= n; z++) {
                if (x + y + z <= n) {
                    ans.push_back({x, y, z});
                }
            }
        }
    }
 
    for (const auto& v : ans) {
        cout << v[0] << " " << v[1] << " " << v[2] << "\n";
    }

 
 
     return 0;
 }