#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        long long input;
        cin >> input;
        if (input & (input - 1))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
