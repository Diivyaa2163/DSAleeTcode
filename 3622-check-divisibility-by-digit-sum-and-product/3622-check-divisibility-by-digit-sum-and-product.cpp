class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int divisorTerm = 0;
        int originalNumber = n;

        while (n > 0) {
            int singleDigit = n % 10;
            sum += singleDigit;
            product *= singleDigit;
            divisorTerm = (sum + product);
            n = (n / 10);
        }

            if ((originalNumber % divisorTerm) == 0) {
                return true;
            }

            else {
                return false;
            }
        }
};