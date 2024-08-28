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
        long long n, k;
        cin >> n >> k;
        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long max = 0, min = 0;
        for (long long i = 0; i < n; i++)
        {

            if (arr[i] % k != 0)
            {
                max += arr[i] / k + 1;
            }
            else
            {

                max += arr[i] / k;
            }
        }

        for (long long i = 0; i < n; i++)
        {
            min += arr[i];
        }
        if (min % k == 0)
        {
            min = min / k;
        }
        else
        {
            min = min / k + 1;
        }
        cout << min << " " << max << endl;
    }
}
