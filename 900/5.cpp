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
        int c = 0;
        for (int i = n; i >= 1; i--)
        {
            if (arr[i] % arr[i - 1] == 0)
            {
                if (arr[i - 1] == 1)
                {
                    arr[i - 1]++;
                    c++;
                    i = n + 1;
                }
                else
                {
                    arr[i]++;
                    c++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}