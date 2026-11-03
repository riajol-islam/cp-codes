 #include <bits/stdc++.h>
using namespace std;

void printButterflyPattern(int n)
{
    int spaces = 2 * n - 1;
    int stars = 0;

    // Iterate through all 2*n - 1 rows.
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        // Update stars and spaces for the current row.
        if (i <= n)
        {
            stars++;
            spaces -= 2;
        }
        else
        {
            stars--;
            spaces += 2;
        }

        // Print stars on the left side.
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        // Print spaces between the two halves.
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        // Print stars on the right side.
        for (int j = 1; j <= stars; j++)
        {
            if (j != n)
            {
                cout << "*";
            }
        }

        // Move to the next line.
        cout << endl;
    }
}

int main()
{
    int n = 4;
    printButterflyPattern(n);

    return 0;
}