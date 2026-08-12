class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int maxlen = 0;
        int left = 0;
        for(int right = 0; right < nums.size(); right++)
        {
            m[nums[right]]++;
            while(m[nums[right]] > k)
            {
            //    if(nums[left] == nums[right])
              //  {
                    m[nums[left]]--;
                    if(m[nums[left]] == 0)
                    {
                        m.erase(nums[left]);
                    }
             //   }
                left++;
            }

            int len = right - left + 1;
            maxlen = max(maxlen, len);
        }

        return maxlen;
    }
};