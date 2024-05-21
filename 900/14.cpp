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
        long long c = 1;
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                c++;
            }
            else
            {
                break;
            }
        }
        cout << c << endl;
    }
}