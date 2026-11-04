#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long l,r;
    cin>>l>>r;
    long long totalsum=(l+r)*(r-l+1)/2;
    cout<<totalsum<<endl;
    if(totalsum>=l && totalsum<=r){
        cout<<0<<endl;
    }
    else if(l>0 || r<0){
        cout<<r-l<<endl;
    }
    else{
        cout<<abs(l+r)-1<<endl;
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}