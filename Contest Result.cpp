#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int arr[101];
    int n,m;
    int sum=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
    	scanf("%d",&arr[i]);
    }
    for(int i=1;i<=m;i++){
    	int x;
    	scanf("%d",&x);
    	sum+=arr[x];
    }
    printf("%d",sum );

    return 0; 
}