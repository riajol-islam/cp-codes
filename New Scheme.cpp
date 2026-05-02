 #include<bits/stdc++.h>
 using namespace std;
 
 int main() {
 #ifndef ONLINE_JUDGE
     freopen("inputf.txt", "r", stdin);
     freopen("outputf.txt", "w", stdout);
 #endif
 
    int s[9];  
    for(int i = 1; i <= 8; i++) {
        scanf("%d", &s[i]);
    }

    for(int i = 1; i <= 8; i++) {
         
        if(s[i] < 100 || s[i] > 675) {
            printf("No\n");
            return 0;
        }

          if(s[i] % 25 != 0) {
            printf("No\n");
            return 0;
        }

         
        if(i > 1 && s[i] < s[i-1]) {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");

 
     return 0;
 }