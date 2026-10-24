 #include <bits/stdc++.h>
using namespace std;

vector<vector<int>> getSubArrays(vector<int>& arr) {
    vector<vector<int>> ans;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            vector<int> subarray;

            for (int k = i; k <= j; k++){
                subarray.push_back(arr[k]);
            }
                

            ans.push_back(subarray);
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3};

    vector<vector<int>> ans = getSubArrays(arr);

    cout << "[";
    for (int i = 0; i < ans.size(); i++) {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j];
            if (j + 1 < ans[i].size())
                cout << ", ";
        }
        cout << "]";

        if (i + 1 < ans.size())
            cout << ", ";
    }
    cout << "]";

    return 0;
}