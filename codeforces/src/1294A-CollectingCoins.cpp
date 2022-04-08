#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        vector<int> values(3);
        int n;
        cin >> values[0] >> values[1] >> values[2] >> n;
        sort(values.begin(), values.end());

        n -= 2 * values[2] - values[1] - values[0];
        if (n < 0 || (n % 3 != 0))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}