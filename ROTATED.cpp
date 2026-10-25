#include<bits/stdc++.h>
using namespace std;

void rotated(vector<int>&arr,int d){
    
int n=arr.size();
for(int i=0;i<d;i++){
    int last=arr[n-1];
    
      for(int j=n-1;j>0;j--){
        arr[j]=arr[j-1];

      }
      arr[0]=last;
      
}

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        vector<int>arr={1,2,3,4,5,6,7};
    int d=2;
    rotated(arr,d);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
   
    }
     return 0;
}


