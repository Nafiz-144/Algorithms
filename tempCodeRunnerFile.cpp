#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Top triangle part
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j < n + 5; j++)
            cout << " "; // printing spaces
        for (int j = 1; j <= (2 * i - 1); j++)
            cout << "*"; // printing stars
        cout << endl;
    }

    // Middle part (printing stars in multiple lines as per n value)
    for (int i = 0; i < n + 4; i++)
    {
        for (int j = 0; j < 5; j++) // printing spaces to align the stars
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++) // printing stars (5 stars per row)
        {
            cout << "* ";
        }
        cout << endl; // after finishing one row, move to the next line
    }

    return 0;
}
