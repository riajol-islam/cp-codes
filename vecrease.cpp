#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int n;
     cin>>n;
     vector<int>vec(n);
     for(int i=0;i<n;i++){
     	cin>>vec[i]; 
     }
     int y;
     cin>>y;
     vec.erase(vec.begin()+(y-1));
     int m,k;
     cin>>m>>k;
     
    vec. erase(vec.begin()+(m-1),vec.begin()+(k-1));
    cout<<vec.size()<<endl; 
    for(const auto& x:vec){
    	cout<<x<<" ";
    }

    return 0;
}