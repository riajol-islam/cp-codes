 #include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    for(int i = 0; i < 10; i++){
         int n;
         cin >> n;
         arr.push_back(n); // এখানে একটি সেমিকোলন (;) যোগ করা হয়েছে
    }
    for(int x : arr){
        cout << x << " "; // একটু স্পেস দিয়ে প্রিন্ট করলে দেখতে সুন্দর লাগবে
    }
}