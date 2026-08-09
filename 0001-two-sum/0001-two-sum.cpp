class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> v;
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++)
        {
            int tofind = target - nums[i];

            if (m.find(tofind) != m.end())
            {
                v.push_back(m[tofind]);
                v.push_back(i);
            }

            m[nums[i]] = i;
        }

        return v;
    }
};