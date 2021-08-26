class Solution {
public:
    bool isPerfectSquare(int num) {
        int x= (int)sqrt(num);
        if(x==sqrt(num))
            return true;
        return false;
    }
};