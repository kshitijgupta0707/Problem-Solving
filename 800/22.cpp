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
        int x, k;
        cin >> x >> k;

        if (k > x)
        {
            cout << "1" << endl
                 << x << endl;
        }
        else if (k == x)
        {
            cout << "2" << endl
                 << x - 1 << " "
                 << "1" << endl;
        }
        else
        {
            int i = x;
            while (i % k == 0)
            {
                i--;
            }
            if (i != x)
            {
                cout << "2" << endl;
                cout << i << " " << x - i << endl;
            }
            else
            {
                cout << "1" << endl
                     << x << endl;
            }
        }
    }
}