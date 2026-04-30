#include<bits/stdc++.h>
using namespace std;
int present[2000001];
int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

   
    
   int n;
   scanf("%d",&n);
   int x;
   for(int i=0;i<n-1;i++){
   	scanf("%d",&x);
   	present[x]=1;
   }
   for(int i=1;i<=n;i++){
   	if(present[i]==0){
   		printf("%d",i);
   	}
   }

    return 0;
}