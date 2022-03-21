#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers(4);
    for (auto &element : numbers)
    {
        cin >> element;
    }
    sort(numbers.begin(), numbers.end());

    cout << numbers[3] - numbers[0] << " " << numbers[3] - numbers[1] << " " << numbers[3] - numbers[2] << endl;
}