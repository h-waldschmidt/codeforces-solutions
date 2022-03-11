#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        double p, a, b, c;
        cin >> p >> a >> b >> c;
        double answer = min(ceil(p / a) * a, ceil(p / b) * b);
        answer = min(answer, ceil(p / c) * c) - p;
        cout << (long long)answer << "\n";
    }
}