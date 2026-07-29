class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        vector<int> m(256, -1);

        int n = s.size();
        while(right < n)
        {
            if (m[s[right]] >= left)
            {
                left = m[s[right]] + 1;
            }

            m[s[right]] = right;

            int len = right - left + 1;
            maxlen = max(maxlen, len);
            right++;


        }

        return maxlen;
    }
};