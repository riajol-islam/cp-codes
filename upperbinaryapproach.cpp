 #include<bits/stdc++.h>
 using namespace std;
 int upperbound(vector<int>&arr,int k){
    int low=0;
    int high=arr.size()-1;
    int ans=arr.size();
    while(low<=high){
        int mid=low+(high-low)/2; 
        //3+(5-3)
        //
        if(arr[mid]>k){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
 }
 //builtin function in c++ stl
 int upperbounds(vector<int>&arr,int k){
     int upper=upper_bound(arr.begin(),arr.end(),k)-arr.begin();
     return upper;
 }
 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = upperbound(arr, k);
    cout << result << endl;
    cout<<upperbounds(arr,k)<<endl;
     return 0; 
 }