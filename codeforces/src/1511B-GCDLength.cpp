#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        cout << (long long)pow(10, a - 1) << " " << (long long)(pow(10, b - 1) + pow(10, c - 1)) << endl;
    }
}