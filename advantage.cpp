#include<bits/stdc++.h>
using namespace std;
void solve (){
	int n;
	cin>>n;
	vector<int>vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
    sort(vec.begin(),vec.end());
    int max1=vec[n-1];
    int max2=vec[n-2];
    for(int i=0;i<n;i++){
    	if(vec[i]!=max1){
    		 cout<<vec[i]-max1<<" ";
    	}
    	else{
    		cout<<vec[i]-max2<<" ";
    	}
    }
    cout<<"\n";




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