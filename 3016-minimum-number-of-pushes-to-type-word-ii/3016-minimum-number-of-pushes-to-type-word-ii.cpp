class Solution {
public:
    int minimumPushes(string word) {
        vector<int> m(26, 0);
        for(int i = 0; i < word.size(); i++)
        {
            m[word[i] - 'a']++;
        }
    
        sort(m.begin(), m.end(), greater<int>());
        int ans = 0;
        int x = 0;
        for(int i = 0; i < 26; i++)
        {
            if(i % 8 == 0)
            {
                x++;
            }
            ans += m[i] * x;

            if(m[i] == 0) break;
        }

    return ans;
    }
};