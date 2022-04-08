#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        long long n, s;
        cin >> n >> s;

        cout << s / (n * n) << "\n";
    }
}