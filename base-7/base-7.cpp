class Solution {
public:
    string convertToBase7(int num) {
        string ret;
        if(num==0) return "0";
        if(num<0) {
            num=-num;
            while(num) {
                ret=to_string(num%7)+ret;
                num/=7;
            }
            ret="-"+ret;
        }
        else {
            while(num) {
                ret=to_string(num%7)+ret;
                num/=7;
            }
        }
        return ret;
    }
};