#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
class Solution
{

public:
    // storing all the subsets then checking
    void solve2(int arr[], int n, int sum, vector<vector<int>> &ans, vector<int> output, int i)
    {

        if (i >= n)
        {
            ans.push_back(output);
            return;
        }

        // include
        output.push_back(arr[i]);
        solve2(arr, n, sum, ans, output, i + 1);

        // exclude
        output.pop_back();
        solve2(arr, n, sum, ans, output, i + 1);
    }
    // not giving correct ans if more zero's are left
    void solve(int arr[], int n, int sum, int &count, int i)
    {

        if (sum < 0)
            return;

        if (sum == 0)
        {

            // Continue to find other subsets that may include additional zeros
            // coumt zero's
            int zero = 0;
            while (i < n && arr[i] == 0)
            {
                i++;
                zero++;
            }
            if (zero != 0)
                count += 2 * zero;
            else
            {
                count++;
            }
            return;
        }
        if (i >= n)
            return;

        // include
        solve(arr, n, sum - arr[i], count, i + 1);

        // exclude
        solve(arr, n, sum, count, i + 1);
    }
    int perfectSum(int arr[], int n, int sum)
    {
        int count = 0;
        vector<vector<int>> ans;
        vector<int> output;
        solve2(arr, n, sum, ans, output, 0);

        return count;
    }
};
int main()
{
    
}