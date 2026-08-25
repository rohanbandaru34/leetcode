class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> m;

        for(int i = 0; i < nums.size(); i++)
        {
            m.insert(nums[i]);
        } 

    int x = k;
    int a = 1;
        while(true)
        {
            int t = x * a;
            if(m.find(t) == m.end())
            {
                return t;
            }
            a++;
        }
        return 0;
    }
};