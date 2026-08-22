class Solution {
public:
    bool checkDivisibility(int n) {
        int m = n;
        int sum = 0;
        int product = 1;

        while (n != 0)
        {
            int a = n % 10;
            sum += a;
            product *= a;
            n /= 10;
        }

        if (m % (sum + product) == 0)
        return true;

        else
        return false;
    }
};