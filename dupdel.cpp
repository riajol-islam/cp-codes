#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     vector<int>vec={2,4,1,7,3,9,1,9,7};
     sort(vec.begin(),vec.end());
     auto it=unique(vec.begin(),vec.end());
     vec.erase(it,vec.end());
     for(const auto& x:vec){
        cout<<x<<" "   ;
     }

    return 0;
}