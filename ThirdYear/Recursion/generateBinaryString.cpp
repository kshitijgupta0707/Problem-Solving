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

void generateStrings(vector<string> &vec, char str[], int num, int i)
{
    if (i == num)
    {
        vec.push_back(str);
        return;
    }
    if (str[i - 1] == '1')
    {
        str[i] = '0';
        generateStrings(vec, str, num, i + 1);
    }
    else
    {
        str[i] = '0';
        generateStrings(vec, str, num, i + 1);
        str[i] = '1';
        generateStrings(vec, str, num, i + 1);
    }
}
vector<string> generateBinaryStrings(int num)
{

    char str[num + 1]; // +1 for the null terminator
    str[num] = '\0';   // null terminator for string
    vector<string> vec;
    str[0] = '0';
    generateStrings(vec, str, num, 1);
    str[0] = '1';
    generateStrings(vec, str, num, 1);
    return vec;
};

int main()
{
}