#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
class Solution
{
public:
    void solve(int index, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        if (index == arr.size())
        {
            ans.push_back(ds);
            return;
        }

        for (int i = index, i < arr.size(); i++)
        {
            if (i > 0 && arr[i - 1] != arr[i])
            {
                ds.push_back(arr[index]);
                solve(index + 1, arr, ans, ds);
                ds.pop_back();
            }
        }

        vector<vector<int>> subsetsWithDup(vector<int> & nums)
        {
            vector<int> ds;
            vector<vector<int>> ans;
            solve(0, nums, ans, ds);
            return ans;
        }
    };
    int main()
    {
        int a;
    }