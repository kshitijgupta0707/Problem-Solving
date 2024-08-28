#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
void solve(vector<string> &s, char str[], int n, int open, int close, int index)
{
    if (open == n && close == n)
    {
        str[index] = '\0';
        s.push_back(str);
        return;
    }
    if (open < n)
    {
        str[index] = '(';
        solve(s, str, n, open + 1, close, index + 1);
    }
    if (close < open)
    {
        str[index] = ')';
         solve(s, str, n, open, close + 1, index + 1);
    }
}

vector<string> generateParenthesis(int n)
{
    vector<string> s;
    if (n == 0)
        return s;
    char str[2 * n + 1];
    str[0] = '(';
    str[2 * n] = '\0';
    solve(s, str, n, 1, 0 , 0);
    return s;
}
int main()
{
}