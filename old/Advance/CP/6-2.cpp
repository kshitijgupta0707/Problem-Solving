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
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int i, j, k;
        for (j = 2; j <= n; j++)
        {
            int c = arr[j];
            i = j - 1;
            while (i >= 1)
            {
                if (arr[i] < c)
                {
                    break;
                }
                i--;
            }
            k = j + 1;
            while (k <= n)
            {
                if (arr[k] < c)
                {
                    break;
                }
                k++;
            }
            // cout << "i = " << i << " j = " << j << " k = " << k << " c = " << c << endl;
            if (i != 0 && k != n + 1)
            {
                break;
            }
        }

        if (j != 0 && k != n + 1)
        {
            cout << "YES" << endl;
            cout << i << " " << j << " " << k << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}