#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int x,y;
    if(!(cin>>x>>y)) return 0;
    cout<<gcd(x,y)<<endl;

    return 0;
}