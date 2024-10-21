#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 1)
    {
        for (int i = 1; i <=(5 + n) - 1; i++)
        {
            for (int j = i + 1; j < n + 5; j++)
                cout << " ";
            for (int j = 1; j <= (2 * i - 1); j++)
                cout << "*";
            cout << endl;
        }

        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 1; i <= 5 + n; i++)
        {
            for (int j = i; j < n + 5; j++)
                cout << " ";
            for (int j = 1; j <= (2 * i - 1); j++)
                cout << "*";
            cout << endl;
        }

        for (int i = 1; i <= n + 4; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    return 0;
}
