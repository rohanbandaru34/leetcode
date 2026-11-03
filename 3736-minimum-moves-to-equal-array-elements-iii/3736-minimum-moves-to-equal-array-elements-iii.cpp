class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxx = *max_element(nums.begin(), nums.end());
        int ans = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            int a = abs(nums[i] - maxx);
            ans += a;
        }
        return ans;
    }
};