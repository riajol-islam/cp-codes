#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

     int n;
     cin>>n;
     int cnt=0;
     int arr[101];
    for(int i=1;i<=n;i++){
    	cin>>arr[i];
    }
    for(int j=1;j<=n;j++){
    	int month=j;
    	int last_digit=month%10;
    	bool is_repdigit=true;
    	while (month>0){
    		if(month%10!=last_digit){
    			is_repdigit = false;
    			break;
    		}
    		month/=10;
    	}
    	if(is_repdigit){
    		long long day=last_digit;
    		while(day<=arr[j]){
    			 cnt++;
    			  day = (day * 10) + last_digit;
    		}
    	}
    }
    cout <<cnt << "\n";
    
     
    return 0;
}