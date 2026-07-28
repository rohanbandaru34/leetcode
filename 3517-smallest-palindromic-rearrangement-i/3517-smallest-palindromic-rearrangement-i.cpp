class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> v(26, 0);
        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            v[s[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            int x = v[i] / 2;
            v[i] -= 2 * x;   
            for (int j = 0; j < x; j++) {
                ans += i + 97;
            }
        }

        string left = ans;

        for (int i = 0; i < 26; i++) {
            if (v[i]) {
                ans += i + 97;
                break;
            }
        }

        reverse(left.begin(), left.end());
        ans += left;

        return ans;
    }
};