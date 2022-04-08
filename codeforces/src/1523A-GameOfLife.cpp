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

        string input;
        cin >> input;

        vector<int> array;

        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    if (input[j] == '0' && input[j + 1] == '1')
                    {
                        array.push_back(j);
                    }
                }
                else if (j == n - 1)
                {
                    if (input[j] == '0' && input[j - 1] == '1')
                    {
                        array.push_back(j);
                    }
                }
                else
                {
                    if (input[j] == '0' && (input[j - 1] - '0' + input[j + 1] - '0') == 1)
                    {
                        array.push_back(j);
                    }
                }
            }

            for (auto &x : array)
            {
                input[x] = '1';
            }
        }

        cout << input << "\n";
    }
}