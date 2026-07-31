class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1.size();
        int b = nums2.size();

        for(int i = 0; i < b; i++)
        {
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());

        int n = nums1.size();

        double ans = 0;
        if(n % 2 == 1)
        {
            ans = nums1[n / 2];
        }

        else
        {
            int c = nums1[n/2 - 1];
            int d = nums1[n/2];

            ans = (c + d) / 2.0;

        }

        return ans;
    }
};