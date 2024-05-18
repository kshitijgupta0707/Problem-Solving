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
        bool b = false;
        if (n % 2 == 0)
        {
            while (n != 1)
            {

                if (n % 2 == 1)
                {
                    b = true;
                    break;
                }
                n = n / 2;            }
        }
        else
        {
            b = true;
        }
        if (b)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}