#include<bits/stdc++.h>
using namespace std;



    inline  int func(int a,int b){
     	int sum=a+b;
     	return sum;
     }

 int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int x,y;
    cin>>x>>y;
    cout<<func(x,y)<<endl;




     return 0;

    }
