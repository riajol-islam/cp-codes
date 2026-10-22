#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio.(false);
    cin.tie(NULL);
    int n;
long long t;
cin>>n>>t;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
long long currenttime=0;
int left=0;
int max_books=0;

for(int right=0;right<n;right++){
    currenttime+=arr[right];
    while(currenttime>t){
        currenttime-=left;
        left++
    }
    max_books=max(max_books,right-left+1);
}
}