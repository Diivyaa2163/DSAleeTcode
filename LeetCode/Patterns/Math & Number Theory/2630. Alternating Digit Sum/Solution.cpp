class Solution {
public:
    int alternateDigitSum(int n) {
        // string s = to_string(n);  // TYPECASTING
        int sum = 0;
        int sign = 1;

        // for (char i : s) {
        //     int digit = i - '0';
        //     sum = sum + (digit * sign);
        //     // Flip the sign for next iteration
        //     sign = sign * (-1);
        // }

        while (n > 0) {
            int digit = n % 10;
            sum = sum + (sign*digit);
            // Flip the sign
            sign = sign * (-1);
            n = n / 10;
        }
        return sum;
    }
};