// # 7. Problem Statement: Reverse Integer
//                         Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
                        
//                         Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

class Solution {
public:
    int reverse(int x) {

        // if(x == INT_MAX || x == INT_MIN)
        // return 0;

        // long temp = abs(x);
        // long num = 0;
        // int count=0;
        // vector<int> v;

        // while(temp > 0){
        //     int i = temp%10;
        //     v.push_back(i);
        //     temp = temp/10;
        //     count++;
        // }
        // long l=1;
        // for(int i=0;i<count-1;i++){
        //     l=l*10;
        // }

        // for(int i=0;i<count;i++){
        //     num = num+ v[i] * l;
        //     l=l/10;
        // }

        // if(x < 0)
        // num = 0-num;

        // if(num < -pow(2,31) || num > pow(2,31)-1)
        // return 0;

        // else
        // return num;
        
        long ans = 0;
        while(x != 0){
            ans = ans * 10;
            ans += x % 10;
            x /= 10;
        }
        if(ans > INT_MAX || ans < INT_MIN)
            return 0;
        return (int)ans;
        
    }
};
