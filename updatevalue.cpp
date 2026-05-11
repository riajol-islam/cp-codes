#include<bits/stdc++.h>
using namespace std;

 void updatebalue(int &n){
	
	 n=n*10;
 
}



int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int a;
     if(!(cin>>a)) return 0;
     updatebalue(a);
     cout<<a;
    return 0;
}