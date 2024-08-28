#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
int removeDuplicates(vector<int> &nums)
{
    int distinct = 1;
    int i = 0, n = nums.size();
    while (i < n - 1)
    {
        if (nums[i] == nums[i + 1])
        {
            for (int j = i; j < n; j++)
            {
                nums[j] = nums[j + 1];
            }
            n--;
        }
        else
        {
            i++;
            distinct++;
        }
    }
    return distinct;
}
int removeDuplicates(vector<int> &nums)
{
    set<int> st;
    for (int i = 0; i < nums.size(); i++)
    {
        st.insert(nums[i]);
    }
    int index = 0;
    for (auto it : st)
    {
        nums[index] = it;
        index++;
    }
}
// 2 piointer
int removeDuplicates(vector<int> &arr)
{
    int i = 0;
    int j = 1;
    int n = arr.size();
    while (j < n)
    {
        if (arr[i] == arr[j])
        {
            j++;
        }
        else
        {
            arr[i + 1] = arr[j];
            i++;
            j++;
        }
    }
     return 1;
}
int main()
{
}