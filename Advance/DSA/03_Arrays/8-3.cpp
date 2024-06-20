#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        set<int> m;
        int n = nums.size();
        int maxSum = INT_MIN;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (sum > maxSum)
            {
                maxSum = sum;
            }
            int min = *(m.begin());
            if (min < 0)
            {
                if (sum - min > maxSum)
                {
                    maxSum = sum;
                }
            }
        }

        if (sum < 0)
        {
            m.insert(sum);
        }
    }
};