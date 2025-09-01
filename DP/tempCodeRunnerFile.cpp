#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += n;
        cout << "Sum:" << sum << endl;
    }

    return 0;
}