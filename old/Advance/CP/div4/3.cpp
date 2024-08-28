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
        long long n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        int c = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            long long max = arr[0];

            for (int j = 0; j <= i; j++)
            {
                if (arr[j] > max)
                {
                    max = arr[j];
                }
            }
            if (max * 2 == sum)
            {
                c++;
            }
            sum -= arr[i];
        }

        cout << c << endl;
    }
}