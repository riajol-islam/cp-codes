 #include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];  

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

     
    for(int i = n - k; i < n; i++){
        printf("%d ", arr[i]);
    }

    
    for(int i = 0; i < n - k; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}