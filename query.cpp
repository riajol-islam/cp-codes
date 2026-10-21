#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<int>points(n);
    for(int i=0;i<n;i++){
        cin>>points[i];
    }
    sort(points.begin(),points.end());
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        int left=lower_bound(points.begin(),points.end(),a)-points.begin();
        int right=upper_bound(points.begin(),points.end(),b)-points.begin();
        int count =right-left;
        cout<<count<<endl;
    }
}