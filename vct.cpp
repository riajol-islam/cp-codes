#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
int n;
     cin>>n;
     vector<int>v(n);
     
     for(int i=0;i<n;i++){
     	 cin>>v[i];
     }
     sort(v.begin(),v.end());
     reverse(v.begin(),v.end());
      for(int n:v)
     cout<<n<<" " ;
 cout<<*min_element(v.begin(), v.end());

    return 0;
}