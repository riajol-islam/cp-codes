#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     vector<int>vec;
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
     	int x;
     	cin>>x;
     	vec.push_back(x);

    }
     
    cout<<*max_element(vec.begin(), vec.end()) - *min_element(vec.begin(), vec.end());

    return 0;
}