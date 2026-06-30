class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        unordered_map<char, int> m;
        int left = 0;
        int n = s.size();

        for(int right = 0; right < s.size(); right++)
        {
            m[s[right]]++;
            while(m['a'] && m['b'] && m['c'])
            {
                --m[s[left]];
                if(m[s[left]] == 0)
                {
                    m.erase(s[left]);
                }
                left++;

            } 
            count += left;
        }

 

        return count;
    }
};