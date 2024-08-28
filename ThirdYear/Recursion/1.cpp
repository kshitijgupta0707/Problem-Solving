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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int a = 0, b = 0, c = 0, d = 0;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '?')
            {
                continue;
            }
            else if (str[i] == 'A')
            {
                a++;
            }
            else if (str[i] == 'B')
            {
                b++;
            }
            else if (str[i] == 'C')
            {
                c++;
            }
            else
            {
                d++;
            }
        }
        int sum = 0;
        if (a >= n)
        {
            sum += n;
        }
        else
        {
            sum += a;
        }
        if (b >= n)
        {
            sum += n;
        }
        else
        {
            sum += b;
        }
        if (c >= n)
        {
            sum += n;
        }
        else
        {
            sum += c;
        }
        if (d >= n)
        {
            sum += n;
        }
        else
        {
            sum += d;
        }
        cout << sum << endl;
    }
}