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
        int oddcount = 0, evencount = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 1)
            {
                oddcount++;
            }
        }
        if (oddcount % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}