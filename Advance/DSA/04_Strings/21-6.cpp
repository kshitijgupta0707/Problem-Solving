#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
int removeLeadingWhiteSpace(string &s)
{
    int i = 0;
    while (i < s.length() && s[i] == ' ')
    {
        i++;
    }
    return i;
}

bool isDigit(char i)
{
    return i >= '0' && i <= '9';
}
bool isZero(char i)
{
    return i == '0';
}
int myAtoi(string s)
{
    int i;
    int len = s.length();
    bool positive = true;

    // step 1
    i = removeLeadingWhiteSpace(s);
    // step2
    if (i < len && (s[i] == '-' || s[i] == '+'))
    {
        if (s[i] == '-')
        {
            positive = false;
        }
        i++;
    }

    // step3 dont check leading zeros

    while (i < len && isZero(s[i]))
    {
        i++;
    }

    // step4
    long long n = 0;
    while (i < len && isDigit(s[i]))
    {
        n = n * 10 + s[i] - '0';
        if (n > INT_MAX)
        {
            return positive ? INT_MAX : INT_MIN;
        }
        i++;
    }
    // apply positiity
    n = positive ? n : -n;

    return n;
}
bool checkPalindrome(string str)
{
    int s = 0;
    int e = str.length() - 1;

    while (s < e)
    {
        if (str[s++] != str[e--])
        {
            return false;
        }
    }
    return true;
}
vector<string> subStrings(string s)
{
    int len = s.length();
    vector<string> vec;
    for (int i = 0; i < len; i++)
    {
        string temp = "";
        for (int j = i; j < len; j++)
        {
            temp += s[j];
            vec.push_back(temp);
        }
    }
    return vec;
}
// string longestPalindrome(string s)
// {
//     vector<string> vec = subStrings(s);
//     int longest = 0;
//     string ans = "";
//     for (int i = 0; i < vec.size(); i++)
//     {
//         bool check = checkPalindrome(vec[i]);
//         if (check)
//         {
//             if (vec[i].length() > longest)
//             {
//                 longest = vec[i].length();
//                 ans = vec[i];
//             }
//         }
//     }
//     return ans;
// }
// Best approach
string longestPalindrome(string str)
{
    int n = str.length();
    int start = 0, end = 0, maxLen = 0;
    for (int i = 1; i < n; i++)
    {
        // This i have checked for even length
        int s = i - 1, e = i;
        while (s >= 0 && e < n && str[s] == str[e])
        {
            if (e - s + 1 > maxLen)
            {
                maxLen = e - s + 1;
                start = s;
                end = e;
            }
            s--, e++;
        }

        // Now i am checking for odd length
        s = i - 1, e = i + 1;
        while (s >= 0 && e < n && str[s] == str[e])
        {
            if (e - s + 1 > maxLen)
            {
                maxLen = e - s + 1;
                start = s;
                end = e;
            }
            s--, e++;
        }
    }
    return str.substr(start, end - start + 1);
}
int solve(string s, int k)
{
    if (s.size() == 0)
        return 0;
    int len = s.length();
    int c = 0;
    int left = 0;
    unordered_map<char, int> m;
    for (int right = 0; right < len; right++)
    {
        m[s[right]]++;
        while (m.size() > k)
        {
            m[s[left]]--;
            if (m[s[left]] == 0)
            {
                m.erase(s[left]);
            }
            left++;
        }
        c += right - left + 1;
    }
    return c;
}
int solve2(string s, int k)
{
    if (s.size() == 0)
        return 0;
    int len = s.length();
    int c = 0;
    int left = 0;
    int arr[26] = {0};
    int distinct = 0;
    for (int right = 0; right < len; right++)
    {
        if (arr[s[right] - 'a'] == 0)
        {
            distinct++;
        }

        arr[s[right] - 'a']++;
        while (distinct > k)
        {
            arr[s[left] - 'a']--;
            if (arr[s[left] - 'a'] == 0)
            {
                distinct--;
            }
            left++;
        }
        c += right - left + 1;
    }
    return c;
}
long long int substrCount(string s, int k)
{
    return solve(s, k) - solve(s, k - 1);
}

// long long int substrCount(string s, int k)
// {
//     int len = s.length();
//     int c = 0;
//     for (int i = 0; i < len; i++)
//     {
//         int distinct = 0;
//         vector<int> count(26, 0);
//         for (int j = i; j < len; j++)
//         {
//             if (count[s[j] - 'a'] == 0)
//             {
//                 distinct++;
//             }

//             count[s[j] - 'a']++;

//             if (distinct == k)
//             {
//                 c++;
//             }
//             else if (distinct > k)
//             {
//                 break;
//             }
//         }
//     }
//     return c;
// }
// long long int substrCount (string s, int k) {
//     int len = s.length();
//     int c = 0;
//     for(int i = 0 ;i < len ; i++){
//         map<char , int > m;
//         int j = i;
//         while( j < len ){
//             m[s[j]]++;
//             j++;
//         if(m.size() == k){
//             c++;
//         }
//         else if(m.size() > k){
//             break;
//         }
//         }
//     }
//     return c;
// }
// int beauty(vector<int> &count)
// {
//     int maxC = INT_MIN;
//     int minC = INT_MAX;
//     for (auto count : count)
//     {
//         if (count > 0)
//         {
//             maxC = max(count, maxC);
//             minC = min(count, minC);
//         }
//     }
//     return (maxC - minC);
// }
// int beautySum(string s)
// {
//     int sum = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         vector<int> count(26, 0);
//         for (int j = i; j < s.length(); j++)
//         {
//             count[s[j] - 'a']++;
//             sum += beauty(count);
//         }
//     }
//     return sum;
int beauty(map<char, int> &count)
{
    int maxC = INT_MIN;
    int minC = INT_MAX;
    for (auto count : count)
    {
        int value = count.second;
        if (value > 0)
        {
            maxC = max(value, maxC);
            minC = min(value, minC);
        }
    }
    return (maxC - minC);
}
int beautySum(string s)
{
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        map<char, int> count;
        for (int j = i; j < s.length(); j++)
        {
            count[s[j]]++;
            sum += beauty(count);
        }
    }
    return sum;
}

int main()
{
    // cout << myAtoi(" -042") << endl;
    // cout << myAtoi("42") << endl;
    // cout << myAtoi("1337c0d3") << endl;
    // cout << myAtoi("1337c0d3") << endl;
    // cout << myAtoi("words and 987") << endl;
    // cout << myAtoi("42322") << endl;
    // cout << myAtoi("-0020000000000000000000000000000000000000000000000") << endl;
    // cout << myAtoi("0020000000000000000000000000000000000000000000000") << endl;
    // cout << INT_MIN;

    cout << longestPalindrome("cbbc");
}

