// rotate array n times
#include <bits/stdc++.h>
using namespace std;
// bits
// test
// inarr
// // outarr
// void rotate(vector<int> &nums, int k)
// {
//     int n = nums.size();
//     k = k % n;
//     // 1 n-k , k
//     int arr1[n-k], arr2[k];
//     for (int i = 0; i < n - k; i++)
//     {
//         arr1[i] = nums[i];
//     }
//     for (int i = 0; i < k; i++)
//     {
//         arr2[i] = nums[ n- k + i];
//     }
//     for (int i = 0; i < k; i++)
//     {
//         nums[i] = arr2[i];
//     }
//     for(int i = k ;  i < n ;i++){
//         nums[i] = arr1[i - k];
//     }
// }

void rotate(std::vector<int> &nums, int k)
{
    int n = nums.size();
    if (n == 0 || k <= 0)
    {
        return;
    }

    k = k % n; // Ensure k is within the bounds of the array size
    if (k == 0)
    {
        return;
    }
    reverse(nums.begin() + 0, nums.begin() + k);
    // [ 0, k - 1 ] index
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
}

int main()
{
}