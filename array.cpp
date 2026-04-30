  #include<bits/stdc++.h>
  using namespace std;
  
  int main() {
  #ifndef ONLINE_JUDGE
      freopen("inputf.txt", "r", stdin);
      freopen("outputf.txt", "w", stdout);
  #endif
  
      int arr[5];
      for(int i=0;i<5;i++){
      	scanf("%d",&arr[i]);
      }
      for(int i=0;i<5;i++){
      	printf("%d\n", arr[i]);
      }
  
      return 0;
  }