class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map <int, int> m;
        int ans = 0;
        int left = 0;

        for(int i = 0 ; i < s.size(); i++)
        {
            m[s[i]]++;
            while(m[s[i]] > 2)
            {
                m[s[left]]--;
                if(m[s[i]] == 0)
                {
                    m.erase(s[i]);
                }
                left++;
            }

            ans = max(ans, i - left + 1);
        }   
        return ans;
    }
};