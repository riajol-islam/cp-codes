#include<bits/stdc++.h>
using namespace std;


inline int sqr(int a){
	return a*a;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
int x;
cin>>x;
for(int i=1;i<=x;i++){
	cout<<sqr(i)<<" ";
}
    

    return 0;
}