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
        int n;
        cin >> n;

        int c = 0;
        int x = n;
        while (x >= 0)
        {
            int i = 0, j = n + 1;
            int high = 0, low = 0;
            while (i < j)
            {
                int mid = i + (j - i) / 2;
                if (n * n == x * x + mid * mid)
                {
                    low = mid;
                    break;
                }
                else if (n * n < x * x + mid * mid)
                {
                    low = mid;
                    j = mid;
                }
                else
                {
                    i = mid + 1;
                }
            }
            i = 0, j = n + 1;
            while (i < j)
            {
                int mid = i + (j - i) / 2;
                if ((n + 1) * (n + 1) == x * x + mid * mid)
                {
                    high = mid - 1;
                    break;
                }
                else if ((n + 1) * (n + 1) > x * x + mid * mid)
                {
                    high = mid;
                    i = mid;
                }
                else
                {
                    j = mid - 1;
                }
            }
            c += high - low + 1;
            x--;
        }
        cout << 4 * c << endl;
    }
}