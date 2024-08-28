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
        string a;
        cin >> a;
        bool same = true;
        for (int i = 0; i < a.length() - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                same = false;
            }
        }
        if (same || a.length() == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            int i = 0, j = 1;
            for (int i = 0; i < a.length() - 1; i++)
            {
                bool swap = false;
                for (int j = i + 1; j < a.length(); j++)
                {
                    if (a[i] != a[j])
                    {
                        int b = a[i];
                        a[i] = a[j];
                        a[j] = b;
                        break;
                        swap = true;
                    }
                }
                if (swap)
                    break;
            }
            cout << "YES" << endl;
            cout << a << endl;
        }
    }
}