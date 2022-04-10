#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long sum_of_squares = 0;
    long long square_of_sums = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum_of_squares += pow(i, 2);
        square_of_sums += i;
    }
    square_of_sums = pow(square_of_sums, 2);
    cout << abs(sum_of_squares - square_of_sums) << endl;
}