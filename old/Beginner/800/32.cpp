#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
int main()
{
  
        string s;
        cin >> s;

        // number of distinct characters in one's user name is odd
        int arr[26];
        for (int i = 0; i < 26; i++)
        {
            arr[i] = 0;
        }
        for (int i = 0; i < s.length(); i++)
        {
            int index = s[i] - 'a';
            arr[index]++;
        }

        int c = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 0)
            {
                c++;
            }
        }
        if (c % 2 != 0)
        {
            cout << "IGNORE HIM!";
        }
        else
        {
            cout << "CHAT WITH HER!";
        }
        cout << endl;
    }
