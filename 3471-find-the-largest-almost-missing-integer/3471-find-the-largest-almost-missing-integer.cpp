class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int ans = -1;

        if(nums.size() == k)
        {
            return *max_element(nums.begin(), nums.end());
        }

        for(int i = 0; i <= nums.size() - k; i++)
        {
            for(int j = i; j < i + k; j++)
            {
                m[nums[j]]++;
            }
        }

        for(auto it : m)
        {
            if(it.second == 1)
            {
                ans = max(ans, it.first);
            }
        }

        return ans;
    }
};