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

        vector<long long> array(n);
        for (auto &element : array)
        {
            cin >> element;
        }

        vector<long long> array_gcd(array.begin(), array.begin() + 2);
        for (int i = 0; i < n; i++)
        {
            array_gcd[i % 2] = __gcd(array_gcd[i % 2], array[i]);
        }

        vector<bool> ok(2, true);
        for (int i = 0; i < n; i++)
        {
            ok[i % 2] = ok[i % 2] && (array[i] % array_gcd[(i % 2) ^ 1] != 0);
        }

        long long answer = 0;
        for (int i = 0; i < 2; i++)
        {
            if (ok[i])
                answer = max(answer, array_gcd[i ^ 1]);
        }
        cout << answer << "\n";
    }
}