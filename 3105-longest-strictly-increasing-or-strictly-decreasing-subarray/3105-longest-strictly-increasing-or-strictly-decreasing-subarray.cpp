class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int n = nums.size();
        int ans = 1;
        while(left < n && right < n)
        {
            if(right + 1 < n && nums[right+1] > nums[right])
            {
                right++;
                ans = max(ans, right - left + 1);
            }

            else
            {
                left = right + 1;
                right = left;
            }
        }

        left = 0;
        right = 0;

        while(left < n && right < n)
        {
            if(right + 1 < n && nums[right+1] < nums[right])
            {
                right++;
                ans = max(ans, right - left + 1);
            }

            else
            {
                left = right + 1;
                right = left;
            }
        }
        return ans;
    }
};