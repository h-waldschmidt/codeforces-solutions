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

        vector<long long> array(n);
        for (long long &element : array)
        {
            cin >> element;
        }
        sort(array.rbegin(), array.rend());

        long long solution = array[0] - array[array.size() - 1];
        cout << solution << "\n";
    }
}