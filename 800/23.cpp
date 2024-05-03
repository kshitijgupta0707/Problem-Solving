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
        string s;
        cin >> s;
        int c = 0;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (s[i] == s[j])
            {
                break;
            }
            c++;
            i++;
            j--;
        }
        if (j - i + 1 < 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout  << j - i + 1 << endl;
        }
    }
}