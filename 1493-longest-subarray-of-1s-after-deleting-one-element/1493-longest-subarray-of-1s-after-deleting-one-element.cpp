class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero_count = 0;
        int left = 0;
        int maxcount = 0;
        for(int right = 0; right < nums.size(); right++)
        {
            if(nums[right] == 0)
            {
                zero_count++;
            }

            while(zero_count > 1)
            {
                if(nums[left] == 0)
                {
                    zero_count--;
                }
                left++;
            }

            maxcount = max(maxcount, right - left + 1);
        }

        return maxcount - 1;
    }
};