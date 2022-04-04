#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        int n, x;
        cin >> n >> x;

        if (n <= 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << floor((n - 3) / x) + 2 << endl;
        }
    }
}