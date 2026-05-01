 #include<bits/stdc++.h>
 using namespace std;
 
 int main() {
 #ifndef ONLINE_JUDGE
     freopen("inputf.txt", "r", stdin);
     freopen("outputf.txt", "w", stdout);
 #endif
 
     int t;
     scanf("%d",&t);
     for(int i=0;i<t;i++){
     	int n;
     scanf("%d",&n);
     int arr[n];
     int cnt=0;
     for(int j=0;j<n;j++){
     	scanf("%d",&arr[i]);
     	if(arr[i]%2==1)
     		cnt++;
     }
     printf("%d\n",cnt);

     }
     
 
     return 0;
 }