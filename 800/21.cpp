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
        int i = 0, j = 0;
        int c = 0;
        while (i < n && j < n)
        {
            if (arr[i] != 0)
            {
                i++;
                j = i;
            }
            else if (arr[i] == 0 && arr[j] == 0)
            {
                j++;
                c = max(c, j - i);
            }
            else
            {
                i++;
                j = i;
            }
        }
        cout << c << endl;
    }
}