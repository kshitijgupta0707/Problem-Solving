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
        int ans = INT_MAX;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = i + 1; j < s.length(); j++)
            {
                if ((s[i] == '0' && s[j] == '0') || (s[i] == '2' && s[j] == '5') || (s[i] == '5' && s[j] == '0') || (s[i] == '7' && s[j] == '5'))
                {
                    int x = j - i - 1 + s.length() - j - 1;
                    if (x < ans)
                        ans = x;
                }
            }
        }
        cout << ans << endl;
    }
}