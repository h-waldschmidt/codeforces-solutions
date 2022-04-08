#include <bits/stdc++.h>

using namespace std;

int main()
{
    int queries;
    cin >> queries;

    for (int i = 0; i < queries; i++)
    {
        long long n, k, remainder;
        cin >> n >> k;
        long long minimum = 0;
        while (n != 0)
        {
            remainder = n % k;
            if (remainder == 0)
            {
                n /= k;
                minimum++;
            }
            else
            {
                n -= remainder;
                minimum += remainder;
            }
        }
        cout << minimum << endl;
    }
}