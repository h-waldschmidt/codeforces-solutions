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
        vector<int> solution(n);
        iota(solution.begin(), solution.end(), 1);
        for (int &value : solution)
        {
            cout << value << " ";
        }
        cout << endl;
    }
}