class Solution {
public:
    long long sumAndMultiply(int n) {
        int x = 0;
        int sum = 0;
        string s = to_string(n);

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] - '0' != 0)
            {
                x *= 10;
                x += s[i] - '0';
                sum += s[i] - '0';
            }
        }

        return (long long)x * sum;
       
    }
};