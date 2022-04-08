#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        long long r, b, d;
        cin >> r >> b >> d;

        if (max(r, b) > (min(r, b) * (d + 1)))
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
}