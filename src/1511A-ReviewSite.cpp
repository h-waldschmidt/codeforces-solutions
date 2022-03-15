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
        int input;
        int solution = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            if (input == 1 || input == 3)
            {
                solution++;
            }
        }
        cout << solution << endl;
    }
}