#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    // char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " "; // cout << ch;
            // ch++;
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

/*for (int j = 0; j < n - i; j++)
        {
            cout << " "; // cout << ch;
            // ch++;
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << endl;*/