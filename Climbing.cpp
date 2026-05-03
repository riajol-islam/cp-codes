#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int arr[100000];
     int n;
     scanf("%d",&n);
     int current=0;
     for(int i=0;i<n;i++){
     	scanf("%d",&arr[i]); 
     }
                for(int j=0;j<n;j++){
                	if(arr[j]<arr[j+1]){
                		current=arr[j+1];
                	}
                	else{
                		current=arr[j];
                		break;
                	}
                }
                printf("%d",current);

    return 0;
}