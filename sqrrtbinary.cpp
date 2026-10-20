#include<bits/stdc++.h>
using namespace std;
int findroot(int n){
    int low=1;
    int high =n;
    int res=1;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid*mid<=n){
            res=mid;
            low=mid+1;
    }
else{
    high=mid-1;
}
}
return res;
}
int fsqrt(int n){
     int res=sqrt(n);
     return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<findroot(n)<<endl;
    cout<<fsqrt(n)<<endl;
}