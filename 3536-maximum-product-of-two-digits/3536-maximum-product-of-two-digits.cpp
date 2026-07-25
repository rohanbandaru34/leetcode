class Solution {
public:
    int maxProduct(int n) {
        int maxx = -1;
        int s_maxx = -1;

        while(n != 0)
        {
            int a = n % 10;
            if(a >= maxx)
            {
                s_maxx = maxx;
                maxx = a;
            }

            else if(a <= maxx && a >= s_maxx)
            {
                s_maxx = a;
            }

            n /= 10;  
        }

        return maxx * s_maxx;
    }
};