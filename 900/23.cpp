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
        int a, b, c;
        cin >> a >> b >> c;
        // check for a
        int diff = c - b;
        int shouldbe = c - 2 * diff;

        if (shouldbe % a == 0 && shouldbe != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            // cout << "passed" << endl;
            if ((c - a) % 2 == 0)
            {
                diff = (c - a) / 2;
                shouldbe = a + diff;
                if (shouldbe % b == 0 && shouldbe != 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    // check for c
                    diff = b - a;
                    shouldbe = a + 2 * diff;
                    if (shouldbe % c == 0 && shouldbe != 0)
                    {
                        cout << "YES" << endl;
                    }
                    else
                    {
                        cout << "NO" << endl;
                    }
                }
            }
            else
            {
                // cout << "passed2" << endl;
                // check for c
                diff = b - a;
                shouldbe = a + 2 * diff;
                if (shouldbe % c == 0 && shouldbe != 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        // check for b
    }
}