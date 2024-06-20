#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long i;

        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 2; i < n; i++)
        {
            if (arr[i``] % i != 0)
            {
                break;
            }
        }
        long long j;
        for (j = n - 1; j >= 0; i++)
        {
            if (n % arr[j] != 0)
            {
                break;
            }
        }
        cout << "ans = " <`< min(j - 1, n - i - 1) << endl;
    }
}