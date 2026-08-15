class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s="";
        if(sum>9*num){
            return "";
        }
        while(s.size()<num){
            if(sum>9){
                s+='9';
                sum-=9;
            }
            else{
                s+=sum+'0';
                sum=0;
            }
        }
        return s;
    }
};