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
int n;
if(!(cin>>n));
int arr[n];
int result=arr[0];
for(int i=0;i<n;i++){
    cin>>arr[i];

}
for(int i=1;i<n;i++){
    result=gcd(result,arr[i]);
}
cout<<result;
     

    return 0;
}