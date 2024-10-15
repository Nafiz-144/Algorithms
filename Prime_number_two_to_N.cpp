#include <bits/stdc++.h>
using namespace std;
int prime_number(int n)
{

    for (int i = 2; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            return i;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    cout << prime_number(n);

    return 0;
}