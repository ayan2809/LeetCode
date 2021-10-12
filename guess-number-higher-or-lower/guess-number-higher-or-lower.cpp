/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low=1, high=n;
        while(true)
        {
            int x=(high-low)/2+low;
            if(guess(x)==0)
                return x;
            else if(guess(x)==1)
                low=x+1;
            else
                high=x-1;
        }
        
    }
};