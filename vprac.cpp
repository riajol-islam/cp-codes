#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     vector<int>v;
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
     	int x;
     	cin>>x;
     	v.push_back(x);
     }
     for(const auto& x:v){
     	cout<<x<<" ";
     }

    return 0;
}