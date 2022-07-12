class Solution {
public:
    int sum(int num1, int num2) {
        if(num2==0)
            return num1;
        if(num2>0)
            return sum(num1+1, num2-1);\
        // else if(num2<0)
        return sum(num1-1,num2+1);
    }
};