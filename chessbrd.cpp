 #include<bits/stdc++.h>
 using namespace std;
 
 int main() {
 #ifndef ONLINE_JUDGE
     freopen("inputf.txt", "r", stdin);
     freopen("outputf.txt", "w", stdout);
 #endif
 
     string s[8];
     for(int i=0;i<8;i++){
     	cin>>s[i];
     }
     for(int i=0;i<8;i++){
     	for(int j=0;j<8;j++){
     		if(s[i][j]=='*'){
     			char col='a'+j;
     			int row=8-i;
     			cout<<col<<row<<endl;
     			return 0;
     		}
     	}
     }
 
     return 0;
 }