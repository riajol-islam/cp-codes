 #include<bits/stdc++.h>
using namespace std;

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int row, col;
    cout << "Enter rows and columns: ";
    cin >> row >> col;

    
   
    vector<vector<int>> matrix(row + 1, vector<int>(col + 1, 0));
 
    cout << "Enter the elements:" << endl;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            cin >> matrix[i][j];
        }
    }

    

     
    cout << "\nYour Matrix is:" << endl;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;  
    }

     
    cout << "\nTotal Rows: " << matrix.size() - 1 << endl;
    cout << "Total Columns in first row: " << matrix[1].size() - 1 << endl;

    return 0;
}