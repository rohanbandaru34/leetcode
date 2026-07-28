class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int base = 0;

        for (int i = 0; i < customers.size(); i++) {
            if (grumpy[i] == 0)
                base += customers[i];
        }

        int gain = 0;

        for (int i = 0; i < minutes; i++) {
            if (grumpy[i] == 1)
                gain += customers[i];
        }

        int maxGain = gain;

        for (int i = minutes; i < customers.size(); i++) {
            if (grumpy[i] == 1)
                gain += customers[i];
            if (grumpy[i - minutes] == 1)
                gain -= customers[i - minutes];

            maxGain = max(maxGain, gain);
        }

        return base + maxGain;
    }
};