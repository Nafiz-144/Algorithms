#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {

        fact *= i;
    }
    return fact;
}

int main()
{
    cout << "N Number factorial:" << factorial(5);

    return 0;
}