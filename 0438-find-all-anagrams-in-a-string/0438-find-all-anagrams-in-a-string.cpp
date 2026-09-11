class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

     vector<int> v1(26, 0);
     vector<int> v2(26, 0);
     vector<int> ans;

        if(s.size() < p.size())
        {
            return ans;
        }

        for(int i = 0; i < p.size(); i++)
        {
            v1[p[i] - 'a']++;
        }   
        int left = 0;
        int right;
        for(right = 0; right < p.size(); right++)
        {
            v2[s[right] - 'a']++;
        }
        if(v1 == v2)
        {
            ans.push_back(left);
        }

        while(right < s.size())
        {
            v2[s[right] - 'a']++;
            v2[s[left] - 'a']--;
                left++;
            if(v1 == v2)
            {
                ans.push_back(left);
            }

        
            right++;
        }

        return ans;
    }
};