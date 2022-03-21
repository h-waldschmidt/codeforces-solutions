#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        long long a, b;
        cin >> a >> b;

        long long test = a % b;
        if (test == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << b - test << endl;
        }
    }
}