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

        int element;
        long long ones = 0, zeros = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> element;
            if (element == 0)
            {
                zeros++;
            }
            if (element == 1)
            {
                ones++;
            }
        }
        long long solution = pow(2, zeros) * ones;
        cout << solution << "\n";
    }
}