 #include<bits/stdc++.h>

using namespace std;

void opt_problem() {
    long long total_students, single_cost, group_cost;
    cin >> total_students >> single_cost >> group_cost;
    
     
    if (3 * single_cost <= group_cost) {
        cout << total_students * single_cost << "\n";
        return;
    }
    
    long long groups_need = total_students / 3;
    long long students_left = total_students % 3;
    
    long long total_expense = groups_need * group_cost;
    
    if (students_left == 1) {
        
        total_expense += min(single_cost, group_cost);
    } 
    else if (students_left == 2) {
        
        total_expense += min(2 * single_cost, group_cost);
    }
    
    cout << total_expense << "\n";
}

int main() {
     
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
#endif

    int  tc;
    cin >> tc;
    while ( tc--) {
        opt_problem();
    }
    return 0;
}