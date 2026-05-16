#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int n;
    cin >> n;

     
    vector<int> v1; 
    vector<int> v2;  

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;  

        if(x % 2 == 0) {
            v1.push_back(x);  
        }
        else {
            v2.push_back(x);  
        }
    }

    
    cout << "Even numbers: " << endl;
    for(int x : v1) {
        cout << x << " ";
    }
    cout << endl;

     
    cout << "Odd numbers: " << endl;
    for(int k : v2) {
        cout << k << " ";
    }
    cout << endl;

    return 0;
}