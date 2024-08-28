#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
// string removeOuterParentheses(string s)
// {
//     string str = "";
//     int len = s.length();
//     int st = 0;
//     int c1 = 0, c2 = 0;
//     for (int i = 0; i < len; i++)
//     {
//         if (s[i] == '(')
//         {
//             c1++;
//         }
//         else
//         {
//             c2++;
//         }
//         if (c1 == c2)
//         {
//             // remove first and last element
//             for (int j = st + 1; j < i; j++)
//             {
//                 str += s[j];
//             }
//             c1 = 0;
//             c2 = 0;
//             st = i + 1;
//         }
//     }
//     return str;
// }
// int convertToNumber(char c)
// {
//     int n = c - 48;
//     return n;
// }
// string largestOddNumber(string num)
// {
//     string str = "";
//     int i = num.length() - 1;

//     // check the first odd number from last it will give teh biggest odd number
//     while (convertToNumber(num[i]) % 2 != 1)
//     {
//         i--;
//     }
//     // if i < 0
//     if (i < 0)
//     {
//         return str;
//     }
//     for (int j = 0; j <= i; j++)
//     {
//         str += num[j];
//     }
//     return str;
// }

// string longestCommonPrefix(vector<string> &strs)
// {
//     int totalStrings = strs.size();

//     // find the min length
//     int len = INT_MAX;
//     for (int i = 0; i < totalStrings; i++)
//     {
//         if (strs[i].length() < len)
//         {
//             len = strs[i].length();
//         }
//     }

//     string ans = "";

//     for (int i = 0; i < len; i++)
//     {
//         bool temp = false;
//         char t = strs[0][i];
//         for (int j = 0; j < totalStrings; j++)
//         {
//             if (strs[j][i] != t)
//             {
//                 temp = true;
//                 break;
//             }
//         }

//         if (temp)
//             break;
//         ans += t;
//     }
//     return ans;
// }

int romanToInt(string s)
{
    map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    int n = s.length();
    int ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i - 1 >= 0)
        {
            if (m[i - 1] >= m[i])
            {
                ans += m[i] + m[i - 1];
            }
            else
            {
                ans += m[i] - m[i - 1];
            }
            i--;
        }
        else
        {
            ans += m[s[i]];
        }
    }
    return ans;
}

int main()
{
    // cout << removeOuterParentheses("()()");
    // cout << reverseWords("  hello world  ");
    // int a = '0' - 48;
    // cout << a << endl;
    cout << largestOddNumber("52") << endl;
    cout << largestOddNumber("4206") << endl;
    cout << largestOddNumber("35427") << endl;
}
// C++ program to demonstrate static
// variables inside a class

#include <iostream>
using namespace std;

class GfG
{
public:
    static int i;

    GfG(){
        // Do nothing
    };
};

int main()
{
    GfG obj1;
    GfG obj2;
    obj1.i = 2;
    obj2.i = 3;

    // prints value of i
    cout << obj1.i << " " << obj2.i;
}