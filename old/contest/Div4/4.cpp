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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a > b)
        {

            if ((c > a || c < b) && (d < a && d > b))
            {
                cout << "YES" << endl;
            }

            else if ((d > a || d < b) && (c < a && c > b))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {

            if ((c > b || c < a) && (d < b && d > a))
            {
                cout << "YES" << endl;
            }

            else if ((d > b || d < a) && (c < b && c > a))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}