#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int >& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
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
    vector<int>arr={44,32,78,22,72,11,90};
    selectionsort(arr);
    cout<<"Sorted array: \n";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}