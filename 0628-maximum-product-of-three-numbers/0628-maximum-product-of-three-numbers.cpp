class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a = INT_MIN;
        int b = INT_MIN;
        int c = INT_MIN;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] >= a)
            {
                c = b;
                b = a;
                a = nums[i];
            }

            else if(nums[i] <= a && nums[i] >= b)
            {
                c = b;
                b = nums[i];
            }
            else if(nums[i] <= a && nums[i] <= b && nums[i] >= c)
            {
                c = nums[i];
            }
        }

        return (long long)a * b * c;
    }
};