 #include<bits/stdc++.h>
using namespace std;

vector<vector<int>> getsubarr(vector<int>& arr){
    vector<vector<int>> ans;
    int n = arr.size();
    
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){ // ✅ সংশোধন: j = i থেকে শুরু হবে
            vector<int> sub;
            for(int k = i; k <= j; k++){
                sub.push_back(arr[k]);
            }
            ans.push_back(sub);
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans = getsubarr(arr);

    cout << "[";
    for(int i = 0; i < ans.size(); i++){
        cout << "[";
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j];
            if(j + 1 < ans[i].size()){
                cout << " ";
            }
        }
        cout << "]"; // ✅ ঠিক জায়গায় রো বন্ধ করা হলো
        
        if(i + 1 < ans.size()){ // ✅ সঠিক শর্ত: ans.size()
            cout << ",";
        }
    }
    cout << "]";

    return 0;
}