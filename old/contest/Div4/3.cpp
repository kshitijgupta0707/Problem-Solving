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
        int c = 0;
        bool t = true;
        int i = 0;
        while (i < s.length())
        {
            if (t && s[i] == '0')
            {
                while (s[i] == '0')
                {
                    i++;
                }
                while (s[i] == '1')
                {
                    i++;
                }
                c++;
                t = false;
            }
            if (i < s.length())
            {
                if (s[i] == '0')
                {
                    while (s[i] == '0')
                    {
                        i++;
                    }
                }
                else
                {
                    while (s[i] == '1')
                    {
                        i++;
                    }
                }
                c++;
            }
        }
        cout << c << endl;
    }
}
