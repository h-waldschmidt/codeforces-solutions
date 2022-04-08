#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {
        int s;
        cin >> s;

        int answer = 0;
        int power = 1e9;

        while (s > 0)
        {
            while (s < power)
            {
                power /= 10;
            }

            answer += power;
            s -= power - (power / 10);
        }

        cout << answer << endl;
    }
}