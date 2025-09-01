#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int dp[N];
// to down approach
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << "fib:" << fib(n) << endl;

    return 0;
}