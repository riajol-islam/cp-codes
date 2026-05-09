#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() { 
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N, M;
    if (!(cin >> N >> M)) return 0;

    set<pair<int, int>> adjacent_pairs;

    for (int i = 0; i < M; i++) {
        vector<int> photo(N);
        for (int j = 0; j < N; j++) {
            cin >> photo[j];
        }
        
        
        for (int j = 0; j < N - 1; j++) {
            int u = photo[j];
            int v = photo[j+1];
            
           
            if (u > v) swap(u, v);
            adjacent_pairs.insert({u, v});
        }
    }

     
    long long total_pairs = (N * (N - 1)) / 2;
    
 
    long long bad_mood_pairs = total_pairs - adjacent_pairs.size();

    cout << bad_mood_pairs << "\n";

    return 0;
}