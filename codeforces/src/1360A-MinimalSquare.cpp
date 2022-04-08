#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        int a, b;
        cin >> a >> b;

        int result = min(max(2 * a, b), max(2 * b, a));
        cout << pow(result, 2) << endl;
    }
}