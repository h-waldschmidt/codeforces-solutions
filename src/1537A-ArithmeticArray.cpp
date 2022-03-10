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

        int item, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> item;
            sum += item;
        }
        if (sum < n)
        {
            cout << "1\n";
        }
        else
        {
            cout << sum - n << "\n";
        }
    }
}