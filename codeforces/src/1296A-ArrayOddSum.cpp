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
        int sum = 0;
        int element;
        bool odd = false, even = false;

        for (int j = 0; j < n; j++)
        {
            cin >> element;
            sum += element;
            if (element % 2 == 0)
            {
                even = true;
            }
            else
            {
                odd = true;
            }
        }

        if (sum % 2 == 1 || (odd && even))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}