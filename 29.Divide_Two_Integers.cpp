// # 29. Problem Statement: Divide Two Integers
//                          Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

//                          The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.
                        
//                          Return the quotient after dividing dividend by divisor.
                        
//                          Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231, 231 − 1]. For this problem, if the quotient is strictly greater than 231 - 1, then return 231 - 1, and if the quotient is strictly less than -231, then return -231.


class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(dividend > pow(2,31) - 1)
        return pow(2,31) - 1;

        if(dividend < -pow(2,31))
        return -pow(2,31);

        if(dividend == INT_MIN && divisor == -1)
        return INT_MAX;

        if(divisor == 1)
        return dividend;

        if(divisor == -1 && dividend < 0)
        return abs(dividend);

        if(divisor == -1 && dividend >= 0)
        return 0-dividend;

        if(dividend == divisor)
        return 1;

        if(divisor == 0)
        return INT_MAX;

        long temp = abs(dividend);
        long div = abs(divisor);
        long count=0;

        while(temp >= div){
            temp = temp-div;
            count++;
        }

        if(dividend < 0 || divisor < 0)
        count = 0 - count;

        if(dividend < 0 && divisor < 0)
        count = abs(count);

        return count;

        
        
    }
};
