class Solution {
public:
    int addDigits(int num) {
        
        // M1: Time Complexity: O(n); Space Complexity: O(n)
        while (num > 9) {
            int sum = 0;
            while(num != 0){
                int digit = num % 10;
                sum = sum + digit;
                num = num / 10;
            }
                  num = sum;
        }

        return num;

        // M2: Digit Root (Modulo 9)
        if (num == 0) {
            return num;
        }
        if ((num % 9 == 0) && (num > 0)) {
            int no = 9;
            return no;
        }
        else{
            int modulo = num % 9;
            return modulo;
        }
    }
};