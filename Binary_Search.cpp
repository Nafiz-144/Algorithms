/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int find;
    cin >> find;
    int lo = 0, hi = n - 1;
    int mid;
    while (hi - lo > 1)
    {

        int mid = (hi + lo) / 2;
        if (v[mid] < find)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] == find)
    {
        cout << lo << endl;
    }
    else if (v[hi] == find)
    {
        cout << hi << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &a, int element)
{
    int low = 0, high = a.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == element)
        {
            return mid;
        }
        else if (element > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1; // Element not found
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int element;
    cin >> element;

    int result = binary_search(a, element);

    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
