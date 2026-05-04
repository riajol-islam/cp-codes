#include <iostream>
using namespace std;

// মাসের দিনগুলো রাখার জন্য একটি বড় Array
long long D[100005]; 

int main() {
    int N;
    cin >> N;
    
    // প্রতিটি মাসে কত দিন আছে তা ইনপুট নেওয়া
    for(int i = 1; i <= N; i++) {
        cin >> D[i];
    }
    
    int count = 0; // মোট কতটি তারিখ মিলবে তার হিসাব
    
    // ১ নম্বর মাস থেকে N নম্বর মাস পর্যন্ত লুপ চলবে
    for(int i = 1; i <= N; i++) {
        int month = i;
        int last_digit = month % 10; // মাসের শেষ ডিজিট (যেমন ২২ এর ২)
        bool is_repdigit = true;
        
        // মাসটি Repdigit (সব সংখ্যা একই) কি না তা চেক করা
        while(month > 0) {
            if(month % 10 != last_digit) {
                is_repdigit = false;
                break;
            }
            month /= 10; // শেষের ডিজিট মুছে ফেলা
        }
        
        // যদি মাসটি Repdigit হয়, তবেই আমরা দিনগুলো গুনব
        if(is_repdigit) {
            long long day = last_digit; // প্রথম সম্ভাব্য দিন (যেমন ২)
            
            // দিনটি ওই মাসের মোট দিনের (D[i]) সমান বা ছোট কি না তা চেক করা
            while(day <= D[i]) {
                count++; // দিনটি ক্যালেন্ডারে থাকলে কাউন্ট ১ বাড়বে
                
                // পরবর্তী Repdigit দিন বানানো (যেমন: ২ -> ২২ -> ২২২)
                day = (day * 10) + last_digit; 
            }
        }
    }
    
    // চূড়ান্ত উত্তর প্রিন্ট করা
    cout << count << "\n";
    
    return 0;
}