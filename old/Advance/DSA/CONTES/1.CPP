
#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
string clearDigits(string s)
{

    string a = "";
    int c = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (isdigit(s[i]))
        {
            c++;
        }
        else
        {
            if (c == 0)
            {
                a += s[i];
            }
            else
            {
                c--;
            }
        }
    }
    reverse(a.begin()  , a.end());
    return a;
}
int main()
{ 
    string s
    
}