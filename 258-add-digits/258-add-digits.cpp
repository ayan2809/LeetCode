class Solution {
public:
    int addDigits(int num) {
        int output=0;
        while(num!=0)
        {
            int d=num%10;
            output+=d;
            if(output%9==0)
                output=9;
            else
            output=output%9;
            num=(int)num/10;
        }
        
        return output;
    }
};