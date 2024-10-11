#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = i + 1; j < n; j++)
        {
            cout << " ";
        }

        for (int j = n + i + 1; j < n * 2; j++)
        {
            cout << " ";
        }
        for (int j = (n * 2) - 1; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}