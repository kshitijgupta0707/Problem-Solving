#include <bits/stdc++.h>
using namespace std;
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
        long long n;
        cin >> n;
        long long c = 0;
        while (n != 1)
        {
            c++;
            if (n % 3 != 0)
            {
                n = -1;
                break;
            }
            else
            {
                if (n % 2 == 0)
                {
                    n = n / 6;
                }
                else
                {
                    n = n * 2;
                }
            }
        }
        if (n == -1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
}