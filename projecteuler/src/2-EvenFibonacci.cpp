#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long sum = 0;
    // initialize fibonacci variables
    int a = 0;
    int b = 1;
    int c = 0;
    while (c <= 4e6)
    {
        // calculate nth fibonacci number
        // not the most efficient version
        // more efficient version can be found here: https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/
        c = a + b;
        a = b;
        b = c;
        if (c % 2 == 0)
        {
            sum += c;
        }
    }
    cout << sum << endl;
}