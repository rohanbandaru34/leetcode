class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.empty()) return {};

        unordered_map<int, int> m;
        vector<int> a = arr;

        sort(a.begin(), a.end());

        int b = a[0];
        int c = 0;

        for(int i = 0; i < a.size(); ++i)
        {
            if(a[i] == b)
            {
                m[a[i]] = c;
            }
            else
            {
                c++;
                m[a[i]] = c;
                b = a[i];
            }
        }

        for(int i = 0; i < arr.size(); i++)
        {
            a[i] = m[arr[i]] + 1;
        }

        return a;
    }
};