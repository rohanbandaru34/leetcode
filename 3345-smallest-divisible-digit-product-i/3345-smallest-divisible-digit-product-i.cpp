class Solution {
public:
    int smallestNumber(int n, int t) {
        int product;
        int ans = n;
        for(int i = n; i <= 100; i++)
        {
            int x = i;
            product = 1;
            while(x != 0)
            {
                int a = x % 10;
                product *= a;
                x /= 10;
            }

            if(product % t == 0)
            {
                ans = i;
                break;
            }
        }

        return ans;
    }
};