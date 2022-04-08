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

        cout << 100 / __gcd(n, 100) << "\n";
    }
}