
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;  
    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) return false;  
    }
    return true;  
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
    #endif

    int x;
    if(!(cin>>x)) return 0; 

    int arr[x];  
    for(int i = 0; i < x; i++) {
        cin >> arr[i];  
        
        cout << "Testing: " << arr[i] << " -> ";
        if (isPrime(arr[i])) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }
    
    return 0;
}
