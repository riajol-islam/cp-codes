  #include<bits/stdc++.h>
  using namespace std;
  
  int main() {
  #ifndef ONLINE_JUDGE
      freopen("inputf.txt", "r", stdin);
      freopen("outputf.txt", "w", stdout);
  #endif
  
       int Roll,sem,Sub;
       cin>>Roll>>sem>>Sub;
       int arr[Roll+1][sem+1][Sub];
       for(int i=1;i<=Roll;i++){
       	for(int j=1;j<=sem;j++){
       		for(int k=1;k<=Sub;k++){
       			cin>>arr[i][j][k];
       		}
       	}
       }
       for(int i=1;i<=Roll;i++){
       	cout<<"Roll "<<i<<" details"<<": "<<endl;
       	for(int j=1;j<=sem;j++){
       		cout<<"semester" <<j<<": ";
       		for(int k=1;k<=Sub;k++){
       			cout<<arr[i][j][k]<<" ";


       		}
       		cout<<endl;
       			 
       	}
       	cout<<"---------------------------------";
       }
  
      return 0;
  }