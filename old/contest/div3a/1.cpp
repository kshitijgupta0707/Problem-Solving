#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
// bits
// test
// inarr
// outarr
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int x;
        cin >> x;
        int y;

        int max = INT_MIN;
        for (int i = 1; i < x; i++)
        {
            if (__gcd(x, i) + i >= max)
            {
                max = __gcd(x, i) + i;
                y = i;
            }
        }
        cout << y << endl;
    }
}