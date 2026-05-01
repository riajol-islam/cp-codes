
#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
 int n;
 scanf("%d",&n);
 
 for(int i=0;i<n;i++){
 	int wkly_sum=0;
 	for(int j=0;j<7;j++){
 		int steps;
 		scanf("%d",&steps);
 		wkly_sum+=steps;
 	}
 	printf("%d ",wkly_sum);
 }

    return 0;
}

