#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// outarr
class Solution
{
public:
    void merge(vector<int> &nums, int s, int e)
    {
        int mid = s + (e - s) / 2;
        int len1 = mid - s + 1;
        int len2 = e - mid;
        int arr1[len1];
        int arr2[len2];
        int i = 0, j = 0, index = s;
        while (i < len1)
        {
            arr1[i++] = nums[index++];
        }
        i = 0;
        while (i < len2)
        {
            arr2[i++] = nums[index++];
        }

        i = 0, j = 0, index = s;
        while (i < len1 && j < len2)
        {
            if (arr1[i] > arr2[j])
            {
                nums[index++] = arr2[j++];
            }
            else
            {
                nums[index++] = arr1[i++];
            }
        }
        while (i < len1)
        {
            nums[index++] = arr1[i++];
        }

        while (j < len2)
        {
            nums[index++] = arr2[j++];
        }
       
    }
    void solve(vector<int> &nums, int s, int e)
    {
        if(s > e){
            return;
        }
        int mid = s + (e - s) / 2;

        solve(nums, s, mid);
        solve(nums, mid + 1, e);
        merge(nums, s, e);
    }
    void sortColors(vector<int> &nums)
    {
        int s = 0, e = nums.size() - 1;
        solve(nums, s, e);
    }
};