#include <bits/stdc++.h>
using namespace std;

int main()
{
    int iter;
    cin >> iter;
    for (int i = 0; i < iter; i++)
    {

        vector<long long> array(7);
        for (auto &element : array)
        {
            cin >> element;
        }

        cout << array[0] << " " << array[1] << " " << array[6] - array[0] - array[1] << "\n";
    }
}