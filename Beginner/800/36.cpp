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
        int h, m;
        cin >> h >> m;
        int ans;
        ans = -(m - 60);
        h = 24 - h;
        h--;
        ans = ans + 60 * h;
        cout << ans << endl;
    }
}