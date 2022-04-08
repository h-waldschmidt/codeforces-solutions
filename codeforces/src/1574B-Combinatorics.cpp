#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        vector<long long> input = {a, b, c};
        sort(input.begin(), input.end());

        if (input[2] - (input[1] + input[0] + 1) <= d && d <= (input[0] + input[1] + input[2] - 3))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}