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
        int arr[n * k];
        for (int i = 0; i < n * k; i++)
        {
            cin >> arr[i];
        }
        long long sum = 0;
        if (n == 2)
        {
            for (int i = 0; i < n * k; i = i + 2)
            {
                sum += arr[i];
            }
        }
        else
        {
            int j = n * k;
            int median = n / 2 + 1;

            for (int i = 0; i < k; i++)
            {
                int c = 0;
                while (c < median)
                {
                    j--;
                    c++;
                }
                sum += arr[j];
            }
        }
        cout << sum << endl;
    }
}