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
        string s;
        cin >> s;
        int count0 = 0, count1 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                count1++;
            }
            else
                count0++;
        }

        int ans = min(count0, count1);
        if (ans % 2 == 1)
        {
            cout << "DA" << endl;
        }
        else
            cout << "NET" << endl;
    }
}