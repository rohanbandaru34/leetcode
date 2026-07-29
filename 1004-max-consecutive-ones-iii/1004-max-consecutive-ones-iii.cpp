class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zcount = 0;
        int maxlen = 0;
        int l = 0;

        for (int r = 0; r < nums.size(); r++)
        {
            if(nums[r] == 0)
            {
                zcount++;
            }

           if(zcount > k)
           {
                if(nums[l] == 0)
                {
                    zcount--;
                }
                l++;
           }

           if(zcount <= k)
           {
            int len = r - l + 1;
            maxlen = max(maxlen, len);
           }
        }
        return maxlen;   
    }
};