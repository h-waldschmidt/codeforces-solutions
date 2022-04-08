#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        long long n, k;
        cin >> n >> k;

        vector<long long> array(n * k);
        for (long long &element : array)
        {
            cin >> element;
        }

        long long sum = 0, j = 0;
        for (long long i = n * k - n / 2 - 1; i >= 0; i -= n / 2 + 1)
        {
            sum += array[i];
            j++;
            if (j == k)
            {
                break;
            }
        }
        cout << sum << "\n";
    }
}