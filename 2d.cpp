#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     vector<vector<int>>ans;
     int x,y,z;
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
     	cin >> x >> y >> z;
     	ans.push_back({x,y,z});
     }
     for(const auto& row:ans){
     	for(const auto& x:row){
     		cout<<x<<" ";
     	}
     	 cout<<"\n";
     }
      for(int i=0;i<ans.size();i++){
      	for(int j=0;j<ans[i].size();j++){
      		cout<<ans[0][j]<<" ";
      	}
      	cout<<"\n";
      }


    return 0;
}