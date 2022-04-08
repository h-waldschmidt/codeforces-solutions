#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x % 2 == 1)
        {
            int a = 2;
            while (true)
            {
                int b = x - 1 - a;

                if (__gcd(a, b) == 1)
                {
                    cout << a << " " << b << " " << 1 << "\n";
                    break;
                }
                a++;
            }
        }
        else
        {
            cout << x / 2 << " " << x / 2 - 1 << " " << 1 << "\n";
        }
    }
}