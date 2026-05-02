#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int n,d;
     int arr[101];
     scanf("%d%d",&n,&d);
     for(int i=1;i<=n;i++){
     	scanf("%d",&arr[i]);
     }
     for(int i=2;i<=n;i++){
     	if(arr[i]-arr[i-1]<=d){
     		printf("%d",arr[i]);
     		return 0;
 
     	}
     	
     }
     printf("-1\n");
     


    return 0;
}