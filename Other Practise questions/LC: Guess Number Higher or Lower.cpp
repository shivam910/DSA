/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */
int guess( int num );

class Solution {
public:
    int guessNumber(int n) {
       int start = 1, end = n;
        int ans;
        while( start <= end )
        {
            int mid = start + ( end - start ) / 2;
            int val = guess( mid );
            if( val == -1)  end = mid-1;
            else if ( val == 1 ) start = mid+1;
            else {
                ans = mid;
                break;
            }
        }
        return ans;
    }
};
