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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int ans = 0;

        int c = 1;
        int s = 0, e = 1;
        if (n == 1)
        {
            ans = 1;
        }
        else
        {
            while (e < n)
            {
                if (arr[e] - arr[e - 1] <= k)
                {
                    e++;
                    c++;
                }
                else
                {
                    s = e;
                    e++;
                    c = 1;
                }
                ans = max(ans, c);
            }
        }

        cout << n - ans << endl;
    }
}