class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums,
                                    vector<vector<int>>& queries) {
        vector<int> ans;
        int EvenSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                EvenSum += nums[i];
            }
        }

        for (auto& q : queries) {
            int val = q[0];
            int i = q[1];

            if (nums[i] % 2 == 0) {
                EvenSum -= nums[i];
            }

            nums[i] += val;
            if (nums[i] % 2 == 0) {
                EvenSum += nums[i];
            }

            ans.push_back(EvenSum);
        }

        return ans;
    }
};