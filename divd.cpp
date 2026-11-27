 #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, x, k;
        cin >> a >> x >> k;

        long long sunny = a;
        long long aubrey = 0;
        long long v = 1;
        long long ans = sunny; // শুরুতেই sunny > aubrey (যেহেতু a >= 1)

        // প্রথমবার v = 1 থেকে শুরু করে প্রথম compliment দেওয়া পর্যন্ত সিমুলেট করি
        while (true) {
            long long next_sunny = sunny + x;
            if (aubrey + v < next_sunny) {
                aubrey += v;
                sunny = next_sunny;
                ans = sunny;
                if (v <= (long long)4e18 / 2) v *= 2;
                else v = (long long)4e18;
            } else {
                // এখন aubrey + v >= next_sunny
                if (k > 0 && aubrey + 1 < next_sunny) {
                    aubrey += 1;
                    sunny = next_sunny;
                    ans = sunny;
                    v = 2;
                    k--;
                    break; // এখন থেকে প্রতি সাইকেলে v = 2 থেকে শুরু হবে
                } else {
                    k = -1; // আর এগোনো সম্ভব নয়
                    break;
                }
            }
        }

        // এখন v = 2 থেকে শুরু হওয়া সাইকেলগুলো দ্রুত প্রসেস করি
        while (k >= 0) {
            // 1. টানা কতগুলো রাউন্ড compliment ছাড়া যাওয়া যায় তা বের করি
            // আমরা এমন সর্বোচ্চ m চাই যেন m রাউন্ড পরও aubrey < sunny থাকে,
            // এবং (m+1)-তম রাউন্ডে compliment দেওয়া লাগে।
            long long m = 0;
            long long cur_v = 2;
            long long s_sim = sunny;
            long long a_sim = aubrey;

            while (true) {
                long long ns = s_sim + x;
                if (a_sim + cur_v < ns) {
                    a_sim += cur_v;
                    s_sim = ns;
                    m++;
                    if (cur_v <= (long long)4e18 / 2) cur_v *= 2;
                    else cur_v = (long long)4e18;
                } else {
                    break;
                }
            }

            // (m+1)-তম রাউন্ডে compliment দিতে হবে
            long long ns = s_sim + x;
            if (k == 0 || a_sim + 1 >= ns) {
                // Compliment দেওয়া সম্ভব নয়, তাই m রাউন্ড গিয়েই শেষ
                ans = s_sim;
                break;
            }

            // পুরো একটি সাইকেলে (m রাউন্ড + 1 compliment রাউন্ড):
            long long rounds_in_cycle = m + 1;
            long long d_sunny = rounds_in_cycle * x;
            long long d_aubrey = (a_sim + 1) - aubrey; // (2^(m+1) - 2) + 1

            if (d_sunny >= d_aubrey && k > 1) {
                // Gap কমছে না, তাই k-1 বার এই একই সাইকেল চলবে!
                long long cycles = k;
                sunny += cycles * d_sunny;
                aubrey += cycles * d_aubrey;
                ans = sunny;
                v = 2;
                k = 0;
            } else {
                // একবার এই সাইকেল চালাই (gap কমলে m-এর মান পরের বার বদলাতে পারে)
                sunny += d_sunny;
                aubrey += d_aubrey;
                ans = sunny;
                v = 2;
                k--;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}