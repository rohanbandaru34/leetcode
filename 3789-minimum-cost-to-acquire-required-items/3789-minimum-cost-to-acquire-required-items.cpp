class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans = 0;
        if(cost1 + cost2 >= costBoth)
        {
            long long x = min(need1, need2);
            long long y = costBoth * x;
            ans += y;

            int a = need1;
            int b = need2;

            a -= x;
            b -= x;

            if(a != 0)
            {
                int i = min(cost1, costBoth);
                ans += 1LL * i * a;
            }

            if(b != 0)
            {
                int i = min(cost2, costBoth);
                ans += 1LL * i * b;

            }
        }

        else
        {
            ans = (1LL * cost1 * need1) + (1LL * cost2 * need2);
        }

        return ans;
    }
};