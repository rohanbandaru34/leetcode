class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string s;
        if(a>(b+1)*2 && b>(a+1)*2){
            return "";
        }
        int a_count=0;
        int b_count=0;
        while(a>0 && b>0){
            if(a>=b){
                 a_count++;
                 if(a_count>2){
                    s+='b';
                    a_count=0;
                    b_count++;
                    b--;
                 }
                 else if(a_count<=2){
                    s+='a';
                    b_count=0;
                    a--;
                 }
            }
            else{
                 b_count++;
                 if(b_count>2){
                    s+='a';
                    a_count++;
                    b_count=0;
                    a--;
                 }
                 else{
                    s+='b';
                    a_count=0;
                    b--;
                 }
            }
        }
        while(b!=0){
            s+='b';
            b--;
        }
        while(a!=0){
            s+='a';
            a--;
        }
        return s;
    }
};