#include <bits/stdc++.h>

using namespace std;

int main()
{
    int iterations;

    cin >> iterations;
    string input;

    for (int i = 0; i < iterations; i++)
    {
        cin >> input;
        long long res = 0;
        long long cur = 0;

        for (int j = 0; j < input.length(); j++)
        {

            if (input[j] == '+')
            {
                cur++;
            }
            else
            {
                cur--;
            }
            if (cur == -1)
            {
                res += j + 1;
                cur = 0;
            }
        }

        cout << res + input.length() << endl;
    }
}