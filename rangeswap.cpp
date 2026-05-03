 #include<bits/stdc++.h>
 using namespace std;
 
 int main() {
 #ifndef ONLINE_JUDGE
     freopen("inputf.txt", "r", stdin);
     freopen("outputf.txt", "w", stdout);
 #endif
 
      int N, P, Q, R, S;
    cin >> N >> P >> Q >> R >> S;

    
    int A[N + 1]; 

    
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

   int length = Q - P; 
    for (int i = 0; i <= length; i++) {
        
        int temp = A[P + i];
        A[P + i] = A[R + i];
        A[R + i] = temp;
    }

    for (int i = 1; i <= N; i++) {
        cout << A[i]<<" ";
         }
    cout << endl;
 
     return 0;
 }