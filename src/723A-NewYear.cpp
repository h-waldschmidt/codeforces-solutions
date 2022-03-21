#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers(3);
    for (auto &element : numbers)
    {
        cin >> element;
    }
    sort(numbers.begin(), numbers.end());

    cout << abs(numbers[0] - numbers[1]) + abs(numbers[2] - numbers[1]) << endl;
}