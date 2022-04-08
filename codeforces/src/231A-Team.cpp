#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int solution = 0;
    for (int i = 0; i < n; i++)
    {
        int user1, user2, user3;
        cin >> user1 >> user2 >> user3;

        if (user1 + user2 + user3 >= 2)
        {
            solution++;
        }
    }

    cout << solution << endl;
}