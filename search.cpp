#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O for Competitive Programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> a = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;

    // STL binary_search returns boolean (true/false)
    bool exists = binary_search(a.begin(), a.end(), target);

    if (exists) {
        // Finding exact index using lower_bound
        auto it = lower_bound(a.begin(), a.end(), target);
        int index = it - a.begin();
        cout << "Element " << target << " found at index: " << index << "\n";
    } else {
        cout << "Element not found!\n";
    }

    return 0;
}