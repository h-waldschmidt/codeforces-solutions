#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0;
    int n;
    string input;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input.find("++X") != std::string::npos || input.find("X++") != std::string::npos)
        {
            x++;
        }
        else if (input.find("--X") != std::string::npos || input.find("X--") != std::string::npos)
        {
            x--;
        }
    }
    cout << x;
}
