class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;

        int n = cardPoints.size();
        for (int i = 0; i < k; i++)
        {
            sum += cardPoints[i];
        }
        int maxsum = sum;
        int i = 0;

        while(k != 0)
        {
            sum -= cardPoints[k - 1];
            sum += cardPoints[n - i - 1];
            maxsum = max(maxsum, sum);
            i++;
            k--;
        }
    return maxsum;
    }
};