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
        int n, f, k;
        cin >> n >> f >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int fav = arr[f - 1];

        int c = 0;
        int same = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= fav)
            {
                c++;
            }
            if (arr[i] == fav)
            {
                same++;
            }
        }

        int bade = c - same;
        if (k <= bade)
        {
            cout << "NO" << endl;
        }
        else if (k > bade && k < c)
        {
            cout << "MAYBE" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}