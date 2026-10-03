class Solution {
public:
    int longestValidParentheses(string s) {
        // M1: BRUTE FORCE APPROACH
        // TIME COMPLEXITY : O(N^2)
        // SPACE COMPLEXITY: O(1)
        int n = s.length();
        int maxLeng = 0;
        for (int i = 0; i < n; i++) {
            int balance = 0;
            for (int j = i; j < n; j++) {
                if (s[j] == '(') {
                    balance++;
                }

                else if(s[j] == ')') {
                    balance--;
                }

                if (balance < 0) {
                    break;
                }

                if (balance == 0) {
                maxLeng = max(maxLeng, j-i+1);
                }

            }
        }
        return maxLeng;
    }
};