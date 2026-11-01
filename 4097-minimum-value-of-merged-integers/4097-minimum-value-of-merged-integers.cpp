class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i += 2)
        {
            int a = nums[i];
            string l = to_string(nums[i+1]);
            int b = nums[i+1];
            int res = (a * pow(10, l.size())) + b;
            ans = min(ans, res);
        }

        return ans;
    }
};