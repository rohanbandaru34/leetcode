class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> s;
        int maxx = INT_MIN;
        int minn = INT_MAX;
        for(int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
            maxx = max(maxx, nums[i]);
            minn = min(minn, nums[i]);
        }

        for(int i = minn; i <= maxx; i++)
        {
            if(s.find(i) == s.end())
            {
                ans.push_back(i);
            }
        }
    
    return ans;

    }
};