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

        int t;
        cin >> t;
        while (t--)
        {
            string s;
            cin >> s;
            for (int i = 0; i < s.length(); i = i + 3)
            {
                if (s[i] == 'b' && s[i + 1] == 'a' && s[i + 2] == 'a')
                {
                    s[i] = 'a';
                }
                else if (s[i] == 'a' && s[i + 1] == 'a' && s[i + 2] == 'b')
                {
                    s[i + 2] = 'a';
                }
                else if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'b')
                {
                    s[i] = 'b';
                }
                else if (s[i] == 'b' && s[i + 1] == 'b' && s[i + 2] == 'a')
                {
                    s[i + 2] = 'b';
                }
            }
            cout << "String = " << s << endl;
        }
    }
}