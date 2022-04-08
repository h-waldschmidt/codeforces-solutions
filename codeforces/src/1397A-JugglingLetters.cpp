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

        vector<int> cnt(26);

        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            for (char &ch : s)
            {
                cnt[ch - 'a']++;
            }
        }
        bool answer = true;
        for (int i = 0; i < cnt.size(); i++)
        {
            if (cnt[i] % n != 0)
            {
                answer = false;
                break;
            }
        }

        if (answer)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}