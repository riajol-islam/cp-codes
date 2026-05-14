#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
    int n;
    cin>>n;
     vector<int>v1(n);
     vector<int>v2(n);
     for(int i=0;i<n;i++){
     	if(cin>>[i]%2==0){
     		v1[i];
     	}
     	else v2[i];
     }
     for(int x:v1){
     	cout<<x<< " "<<endl;
     }
     for(int k:v2){
     	cout<<k<<" "<<endl;
     }


    return 0;
}