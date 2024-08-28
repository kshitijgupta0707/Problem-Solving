#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr

bool help(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            return false;
        }
    }
    return true;
}

bool check(vector<int> &nums)
{

    // rotate and check
    for (int k = 0; k < nums.size(); k++)
    {
        bool ch = help(nums);
        if (ch == true)
            return true;
        int temp = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            int t2 = nums[i];
            nums[i] = temp;
            temp = t2;
        }
        nums[0] = temp;
    }
    return false;
}
int main()
{
}