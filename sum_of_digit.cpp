#include <bits/stdc++.h>
using namespace std;
int sumOfDigit(int n)
{
    int s = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;

                n /= 10;

        s += lastDigit;
    }

    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << sumOfDigit(n);

    return 0;
}