#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int n,d;
     cin>>n>>d;
     char arr[n+1][d+1];
     for(int i=1;i<=n;i++){
     	for(int j=1;j<=d;j++){
     		cin>>arr[i][j];
     	}
     }
     int current=0;
     int max=0;
     for(int j=1;j<=d;j++){
     	bool everyone_free=true;
     	for(int i=1;i<=n;i++){
     		if(arr[i][j]=='x'){
     			everyone_free=false;
     			break;
     		}
     	}
     	if(everyone_free){
     		current++;
     	}else{
     		current=0;
     	}

                
     		 
     	if(current>max){
     		max=current;
     	}
     }
cout<< max << endl;
    return 0;
	}