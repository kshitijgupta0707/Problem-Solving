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

        vector<int> v;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        cout << subarraysDivByK(v, k);
    }
}