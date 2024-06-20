class Solution
{
public:
    // bool checkSubarraySum(vector<int>& nums, int k) {
    //     //brutforce
    //      int n = nums.size() ;
    //      for(int i = 0 ; i < n ; i++){
    //         int sum = nums[i];
    //         for(int j = i + 1 ; j < n ; j++){
    //             sum += nums[j];
    //             if(sum % k == 0){
    //                 if(j - i + 1 >=2){
    //                     return true;
    //                 }
    //             }
    //         }
    //      }
    //      return false;
    // }
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        int n = nums.size();
        int i = 0, sum = 0;
        while (i < n)
        {
            sum = sum + nums[i];
            if (sum % k == 0)
            {
                if (i + 1 >= 2)
                {
                    return true;
                }
            }
            // check for every case in unordered map
            for (auto j : m)
            {
                if ((sum - j.first) % k == 0)
                {
                    if (i - j.second >= 2)
                    {
                        return true;
                    }
                }
            }
            if (m.find(sum) != m.end())
            {
                m[sum] = i;
            }
            i++;
        }
        return false;
    }
};