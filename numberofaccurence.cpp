 #include<bits/stdc++.h>
 using namespace std;
 int countfre(vector<int>&arr,int target){
    int result=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            result++;
        }
    }
    return result;
 }
 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = countfre(arr, target);
    cout << result << endl;
    return 0;
 }
 