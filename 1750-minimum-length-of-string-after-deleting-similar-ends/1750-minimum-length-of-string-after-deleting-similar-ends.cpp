class Solution {
public:
    int minimumLength(string s) {
        int total = 0;
        int n = s.size();
        int prefix = 0;
        int suffix = n - 1;

        while(prefix < suffix)
        {
            if(s[prefix] == s[suffix])
            {
                int i = prefix;
                int j = suffix;

                while(i < suffix && s[i] == s[suffix])
                {
                    i++;
                }

                while(j > prefix && s[j] == s[prefix])
                {
                    j--;
                }

                if(i > j)
                {
                    return 0;
                }

                total += abs(i - prefix);
                total += abs(j - suffix);
                prefix = i;
                suffix = j;

            }

            else 
            {
                break;
            }
        }

        return n - total;


    }
};