class Solution {
public:
    long long int reverse(int x) {
        long long int revNum = 0;
        while (x != 0) {
            int dig = x % 10;
            if (revNum > INT_MAX || revNum < INT_MIN) {
                return 0;
            }
            revNum = revNum * 10 + dig;
            x = x / 10;
        }
        return revNum;
    }

    bool isPalindrome(int x) {

        if (x<0) {
            return false;
        }

        int revNum = reverse(x);
        return x == revNum;
    }
};