class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a = INT_MIN;
        int b = INT_MIN;
        int c = INT_MIN;
        int d = INT_MAX;
        int e = INT_MAX;

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

            if(nums[i] < d)
            {
                e = d;
                d = nums[i];
            }

            else if(nums[i] >= d && nums[i] <= e)
            {
                e = nums[i];
            }


        }

        int x = a * b * c;
        int y = a * d * e;

        return max(x, y);
    }
};