class Solution {
public:
    int solve(string answerKey, int k, char c)
    {
        int i = 0, j;
        for (j = 0; j < answerKey.length(); ++j) {
            if (answerKey[j] == c) k--;
            if (k < 0 && answerKey[i++] == c) k++;
        }
        return j - i;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        int x=0,y=0;
        for(auto it: answerKey)
        {
            if(it=='T')
                x++;
            else
                y++;
        }
        
        return max(solve(answerKey, k,'F'),solve(answerKey, k,'T'));
    }
};