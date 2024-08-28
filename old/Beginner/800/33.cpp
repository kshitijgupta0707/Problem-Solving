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
        long long r;
        cin >> r;
        long long m = pow(r + 1, 2);
        long long n = pow(r, 2);
        long long a = 1, b = 1;
        long long c = 0;
        while (1)
        {
            while (1)
            {
                if (a * a + b * b < n)
                {
                    b++;
                }
                else if (a * a + b * b < m && a * a + b * b >= n)
                {
                    c++;
                    b++;
                }
                else
                    break;
            }
            b = 1;
            a++;
            if (a * a + b * b >= m)
                break;
        }
        c = c * 4;
        if (0 < m && 0 >= n)
        {
            c++;
        }
        a = 0;
        b = 1;
        while (1)
        {
            if (a * a + b * b < n)
            {
                b++;
            }
            else if (a * a + b * b < m && a * a + b * b >= n)
            {
                c += 2;
                b++;
            }
            else
                break;
        }
        a = 1;
        b = 0;
        while (1)
        {
            if (a * a + b * b < n)
            {
                a++;
            }
            else if (a * a + b * b < m && a * a + b * b >= n)
            {
                c += 2;
                a++;
            }
            else
                break;
        }
        cout << c << endl;
    }
}