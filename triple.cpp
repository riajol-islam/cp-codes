  #include<bits/stdc++.h>
  using namespace std;
  void solve() {
    int n;
    cin >> n;
    
    
    vector<int> freq(n + 1, 0);
    int ans = -1;
    
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        
        freq[val]++;  
        
 
        if (freq[val] >= 3) {
            ans = val;
        }
    }
    
     
    cout << ans << "\n";
}
  int main() {
  #ifndef ONLINE_JUDGE
      freopen("inputf.txt", "r", stdin);
      freopen("outputf.txt", "w", stdout);
  #endif
  
      int t;
    cin >> t;
    while (t--) {
        solve();
    }
      return 0;
  }