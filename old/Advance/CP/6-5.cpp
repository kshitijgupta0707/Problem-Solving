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
        long long n, m;
        cin >> n >> m;
        if (n == m)
        {
            cout << "0 0" << endl;
        }
        else
        {
            long long diff = abs(n - m);
            long long ans = n % diff;
            long long mini = min(ans, diff - ans);
            cout << diff << " " << mini << endl;
        }
    }
}