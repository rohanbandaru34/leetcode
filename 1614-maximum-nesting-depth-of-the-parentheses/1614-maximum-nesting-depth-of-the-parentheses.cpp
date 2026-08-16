class Solution {
public:
    int maxDepth(string s) {
        int maxx = 0;
        int count = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                count++;
                maxx = max(maxx, count);
            }

            else if(s[i] == ')')
            {
                count--;
            }
        }

        return maxx;
    }
};