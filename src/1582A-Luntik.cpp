#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        long long x = a + 2 * b + 3 * c;
        if (x % 2 == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }
}