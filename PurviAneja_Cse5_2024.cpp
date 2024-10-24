#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // Print the upper half of the pattern
    for (int i = 1; i <= n; i++)
    {
        // Print the left side of the pattern
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Print the center of the pattern
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // Print the right side of the pattern
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }
    // Print the lower half of the pattern
    for (int i = n; i >= 1; i--)
    {
        // Print the left side of the pattern
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Print the center of the pattern
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // Print the right side of the pattern
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}
