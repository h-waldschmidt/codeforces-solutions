#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> values(n), colors;

    for (int &value : values)
    {
        cin >> value;
    }

    sort(values.begin(), values.end());

    for (int i = 0; i < n; i++)
    {
        bool ok = true;

        for (int &value : colors)
        {
            if (values[i] % value == 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            colors.push_back(values[i]);
        }
    }

    cout << colors.size() << endl;
}