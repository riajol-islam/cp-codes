#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int n;
     cin>>n;
     vector<int>vec;
      for(int i=0;i<n;i++){
      	int x;
      	cin>>x;
      	vec.push_back(x);
      }
      sort(vec.begin(),vec.end());
      for(const auto& x:vec){
      	cout<<x<<" ";
      }

    return 0;
}