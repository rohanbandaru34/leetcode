class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int prefix = nums[0];
        unordered_set <int> m;

        for(int i = 0; i < nums.size(); i++)
        {
            m.insert(nums[i]);
        } 

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i - 1] + 1)
            {
                prefix += nums[i];
            }

            else
            {
                break;
            }
        }
        
        int x = prefix;
        while(m.find(x) != m.end())
        {
            x++;
        }

        return x;
    }
};