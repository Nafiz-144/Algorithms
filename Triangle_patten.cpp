#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;

    char ch = 'A';

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
} /*

 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n = 4;

     for (int i = 0; i < n; i++)
     {
         int num = 1;
         for (int j = 0; j < i + 1; j++)
         {
             cout << num << " ";
             num++;
         }
         cout << endl;
     }

     return 0;
 }*/