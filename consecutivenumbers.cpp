#include <iostream>
using namespace std;

// C++ program to check whether a number
// can be expressed as sum of consecutive numbers
bool isSumOfConsecutive(int n)
{
    // Try every starting number
    for (int i = 1; i < n; i++)
    {
        int sum = 0;

        // Generate consecutive sum
        for (int j = i; j < n; j++)
        {
            sum += j;

            // If sum becomes equal to n
            // and at least two numbers are used
            if (sum == n && j > i)
            {
                return true;
            }

            // If sum exceeds n
            if (sum > n)
            {
                break;
            }
        }
    }

    return false;
}

// Driver code
int main() {

    int n = 10;


    if (isSumOfConsecutive(n)) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}