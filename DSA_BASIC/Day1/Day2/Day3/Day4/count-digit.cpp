/* You are given an integer n. You need to return the number of digits in the number.

The number will have no leading zeroes, except when the number is 0 itself. */

class Solution {
public:
    int countDigit(int n) {
        if(n == 0){
            return 1;
        }

        int count = 0;
        n = abs(n);
        while(n > 0){
            count++;
        }
        return count;
    }
};
