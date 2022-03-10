#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        int n;
        cin >> n;

        int odd = 0;
        int item;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> item;
            if (item % 2 == 1)
            {
                odd++;
            }
        }

        if (odd == n)
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << "No"
                 << "\n";
        }
    }
}