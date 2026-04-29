 #include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("inputf.txt","r",stdin);
 	freopen("outputf.txt","w",stdout);
	set<int>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		s.insert(x);

	}
	 
	for(int i:s){
		cout<<i<<" ";
	}
	if(s.find(4) != s.end()){
    cout << "4 found";
}
}