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
        vector<int> array(n);
        for (int &value : array)
        {
            cin >> value;
        }

        if (array[n - 1] >= array[0] + array[1])
        {
            cout << 1 << " " << 2 << " " << n << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}