int reverse(int x){
long int revnum = 0;
    while(x != 0)
    {
        int lastdigit;
        lastdigit = x % 10;
        revnum = (revnum * 10) + lastdigit;
         if (revnum > 2147483647 || revnum < -2147483648) {
            return 0;
        }
        x = x / 10;
    }
    return revnum;
}