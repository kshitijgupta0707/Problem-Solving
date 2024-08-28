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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int i = n - 2;
        int ans = 0;
        while (i >= 0)
        {
            if (arr[i + 1] == 0)
            {
                ans = -1;
                break;
            }
            if (arr[i] >= arr[i + 1])
            {
                arr[i] = arr[i] / 2;
                ans++;
                i = n - 2;
            }
            else
            {
                i--;
            }
        }
        cout << ans << endl;
    }
}