#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int n,k;
     cin>>n>>k;
     vector<int>vec(n);
     for(int i=0;i<n;i++){
     	cin>>vec[i];
     }
     int tar_scr=vec[k-1];
     int cnt=0;
     for(int i=0;i<n;i++){
     	if(vec[i]>=tar_scr && vec[i]>0) cnt++;
     }
     cout<<cnt;

    return 0;
}