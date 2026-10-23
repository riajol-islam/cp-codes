#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<vector<int>>&arr){
    int n=arr.size();
    int m=arr[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j!=m-1){
                if(arr[i][j]>arr[i][j+1]){
        return false;
                }

            }
            else if(i!=n-1){
                if(arr[i][j]>arr[i+1][0])
                return false;

            }
        }
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    if (sorted(arr)) {
        cout << "Globally Sorted\n";
    } else {
        cout << "Not Globally Sorted\n";
    }

    return 0;
}