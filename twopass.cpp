#include<bits/stdc++.h>
 using namespace std;
 int seclargest(vector<int> & arr){
     int n=arr.size();
     int largest=-1;
     int seclarge=-1;
     
     //find1st largest
     for(int i=0;i<n;i++){
         if(arr[i]>largest){
             largest=arr[i];
         }
     }
     //2nd largest
     for(int i=0;i<n;i++){
         if(arr[i]>seclarge && arr[i]!=largest){
             seclarge=arr[i];
         }
     }
    return seclarge;
 }
 int main(){
     vector<int>arr={12, 35, 1, 10, 34, 1};
     cout<<seclargest(arr);
 }