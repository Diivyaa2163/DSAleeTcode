class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);  // TYPECASTING
        int sum = 0;
        int sign = 1;

        for (char i : s) {
            int digit = i - '0';
            sum = sum + (digit * sign);
            // Flip the sign for next iteration
            sign = sign * (-1);
        }
        // N = reverse(stringn.begin(), n.end());
        // while (N > 0) {
        //     int digit = N % 10;
        //     sum = sum + ((+1)*digit);
        //     N = N / 10;
        //     sum = sum + ((-1)*digit);
        // }
        return sum;
    }
};