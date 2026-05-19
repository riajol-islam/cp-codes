#include<bits/stdc++.h>
using namespace std;
int max_sum(int n,vector<int>vec){
     	int max1=INT_MIN;
     	int max2=INT_MIN;
     	for(int i=0;i<n;i++){
     		if(vec[i]>max1){
     			max1=vec[i];
     		}
     	}
     	for(int i=0;i<n;i++){
     		if(vec[i]>max2 && vec[i]!=max1){
     			max2=vec[i];
     		}
     	}
     	return max1+max2;
     }
int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif
int n;
cin>>n;
 vector<int>vec(n);
 for(int i=0;i<n;i++){
 	cin>>vec[i];
 }
cout<<max_sum(n,vec);

    return 0;
}