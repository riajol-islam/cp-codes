#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i], arr[min]);
    }
}
int main(){
    vector<int>arr={5,4,3,2,1};
    selectionsort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}