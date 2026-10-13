#include<bits/stdc++.h>
 using namespace std;
 
 int largest(vector<int> &arr ){
     int max=arr[0];
      for(int i=1;i<arr.size();i++)
        if(arr[i]>max)
         max=arr[i];
       
       return max;
 }
 int main(){
     
     vector<int>arr={30,19,40};
     cout<<largest(arr);
     return 0;
 }