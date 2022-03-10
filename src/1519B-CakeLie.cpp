#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        if (a * b - 1 == c)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}