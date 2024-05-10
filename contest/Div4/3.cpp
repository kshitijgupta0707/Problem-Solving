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

        int first = 1;
        int count = 1;
        bool end0 = false;
        bool end1 = false;
        if (s[s.length() - 1] == '0')
            end0 = true;
        else
            end1 = true;
        int i;
        if (end0)
        {
            for (i = s.length(); i >= 0; i--)
            {
                if (s[i] == '1')
                {
                    count += 2;
                    break;
                }
            }
        }
        if (end1)
        {
            for (i = s.length(); i >= 0; i--)
            {
                if (s[i] == '0')
                {
                    count += 1;
                    break;
                }
            }
        }
        while (i >= 0)
        {

            if (i >= 2 && s[i] == '1' && s[i - 1] == '0' && s[i - 2] == '1')
            {
                i--;
                count += 2;
            }
            else if (s[i] == '0')
            {
                while (i >= 0 && s[i] == '0')
                {
                    i--;
                }
                if (i > 0)
                {
                    count++;
                }
            }
            i--;
        }
        cout << count << endl;
    }
}
