class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;
        int max_water = 0;

        

        while (left < right)
        {
            int breadth = right - left;
            int a = min(height[left], height[right]);
            int water = a * breadth;

            if (water > max_water)
            {
                max_water = water;
            }

            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return max_water;
    }
};