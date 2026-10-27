 #include<bits/stdc++.h>
 using namespace std;
 int gcd(int a,int b){
    if(a==0||b==0){
        return max(a,b);
    }
    int result=min(a,b);
    while(result>0){
        if(a%result==0 && b%result==0){
            break;
        }
        result--;
    }
    return result;
 }
 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a=60;
    int b=36;
    cout<<gcd(a,b);
 }