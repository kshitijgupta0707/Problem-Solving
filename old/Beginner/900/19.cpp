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
        string a, p;
        cin >> a >> p;
        int i = a.length() - 1, j = p.length() - 1, c = 0;
        while (j >= 0 && i >= 0)
        {
            if (a[i] == p[j])
            {
                i--;
                j--;
            }
            else
            {
                i--;
                c++;
            }
        }
        if (j < 0)
            cout << "Ans" << c << endl;
        else
            cout << "Ans" << -1 << endl;
    }
}