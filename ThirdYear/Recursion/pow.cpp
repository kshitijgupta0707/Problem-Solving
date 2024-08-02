#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr

// iterative
int power(int x, unsigned int y)
{
    int res = 1; // Initialize result

    while (y > 1)
    {
        // If y `is odd, multiply x with result
        if (y % 2 == 1)
        {
            res = res * x;
        }
        y = y / 2;
        x = x * x;
    }

    return res;
}
// recursively
int solve(int x, unsigned int y, int result)
{
    if (y < 1)
    {
        return result;
    }
    else
    {
        if (y % 2 == 1)
        {
            result *= y;
        }
        solve(x * x, y / 2, result);
    }
}
int main()
{
}