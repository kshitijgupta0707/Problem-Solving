#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
bool checkPalindrome(string s, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i++] != s[j--])
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    int m = 0;
    while (t--)
    {
        m++;
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (k == n - 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            unordered_map<char, int> temp;
            for (int i = 0; i < n; i++)
            {
                temp[s[i]] = 0;
            }
            for (int i = 0; i < n; i++)
            {
                temp[s[i]]++;
            }
            if ((n - k) % 2 == 0)
            {
                int c = 0;
                for (int i = 0; i < n; i++)
                {
                    if (temp[s[i]] % 2 == 1)
                    {
                        temp[s[i]]--;
                        c++;
                    }
                }
                if (c == k)
                {
                    cout << "Yes" << endl;
                }
                else if (c < k && (k - c) % 2 == 0)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
            else
            {
                int c = 0;
                for (int i = 0; i < n; i++)
                {
                    if (temp[s[i]] % 2 == 1)
                    {
                        temp[s[i]]--;
                        c++;
                    }
                }
                // sb kuch even ho gya hoga
                c--;
                if (c == k)
                {
                    cout << "Yes" << endl;
                }
                else if (k > c && (k - c) % 2 == 0)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
        }
    }
}