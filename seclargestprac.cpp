 #include<bits/stdc++.h>
using namespace std;

int secondlargest(vector<int> arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    return arr[n-2];
}

int seclarge(const vector<int>& arr) {
    int n = arr.size();
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << secondlargest(arr) << endl;
    cout << seclarge(arr) << endl;
    
    return 0;
}