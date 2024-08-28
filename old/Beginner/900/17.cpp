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
        int n, q;
        cin >> n >> q;
        int arr[n];
        long long prefix[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        prefix[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + arr[i];
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            l--;
            r--;
            long long sumbetween = 0;
            if (k % 2 == 1)
            {
                if ((r - l + 1) % 2 == 1)
                {
                    sumbetween = 1;
                }
            }
            long long totalSum = 0;
            if (l > 0)
                totalSum = prefix[n - 1] - (prefix[r] - prefix[l - 1]) + sumbetween;
            else
                totalSum = prefix[n - 1] - (prefix[r]) + sumbetween;
            if (totalSum % 2 == 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}