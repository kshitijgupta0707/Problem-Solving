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
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != 0 && arr[i + 1] == 0)
            {
                c++;
            }
        }
        if (arr[n - 1] != 0)
            c++;
        if (c < 2)
        {
            cout << c << endl;
        }
        else
            cout << "2" << endl;
    }
}