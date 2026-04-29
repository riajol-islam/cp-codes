 #include<bits/stdc++.h>
using namespace std;
 int main(){
 	freopen("inputf.txt","r",stdin);
 	freopen("outputf.txt","w",stdout);
 	vector<int>arr;
 	for(int i=0;i<5;i++){
 		int n;
 		cin>>n;
 		 arr.push_back(n);
 	}
 	sort(arr.begin(),arr.end());
 	reverse(arr.begin(),arr.end());
 	//arr.erase(arr.begin()+2);

 	for(int i:arr){
 		cout<<i<<" "<<endl; 
 	}
 	cout<<arr.front()<<" "<<arr.back();
 }