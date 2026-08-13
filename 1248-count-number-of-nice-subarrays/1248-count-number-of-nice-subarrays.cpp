class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int left = 0;
        int oddcount = 0;
        int ans = 0;
        int x = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            if(nums[right] % 2 != 0)
            {
                oddcount++;
                x = 0;
            }

            while(oddcount == k)
            {
                x++;
                if(nums[left] % 2 != 0)
                {
                    oddcount--;
                }
                left++;
            }

            ans += x;
        }
        return ans;
    }
};