#include<bits/stdc++.h>
using namespace std;
void reversearr(vector<int>&arr,int d){
    int n=arr.size();
    for(int i=0;i<n;i+=d){
        int left=i;
        int right=min(i+d-1,n-1);
        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;

        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>arr={3,4,5,6,7,8,9};
    int d=3;
    reversearr(arr,d);
    for(int x:arr){
        cout<<x<<" ";
    }

}