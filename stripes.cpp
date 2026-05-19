 #include<bits/stdc++.h>
 using namespace std;
 
void solve(){
	 
	 
		vector<string>grid(8);
		for(int i=0;i<8;i++){
			cin>>grid[i];
           }
           for(int i=0;i<8;i++){
           	bool is_red=true;
           	for(int j=0;j<8;j++){
           		if(grid[i][j]!='R'){
           			is_red=false;
           			break;
           		}
           	}
           	if(is_red){
           		cout<<"R\n";
           		return;
           	}

           }
           cout<<"B\n";
		
	 
}
int main() {
 #ifndef ONLINE_JUDGE
     freopen("inputf.txt", "r", stdin);
     freopen("outputf.txt", "w", stdout);
 #endif
  int t;
  cin>>t;
  while(t--){
  	solve();
    
  }
   return 0;
 }