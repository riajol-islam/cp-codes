#include<bits/stdc++.h>
using namespace std;
void myswap(int &a,int &b){
     	int temp=a;
     	a=b;
     	b=temp;
     }


int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
int x,y;
cin>>x>>y;
myswap(x,y);
cout<<x<<" "<<y;
    return 0;
}