class Solution {
public:
    int minimumPushes(string word) {
        int x = word.size();
        int ans = 0;
        int a = x % 8;
        int b = x / 8;

        ans += (a * (b + 1)); 

        while(b != 0)
        {
            ans += (8 * b);
            b--;
        }

        return ans;
    }
};