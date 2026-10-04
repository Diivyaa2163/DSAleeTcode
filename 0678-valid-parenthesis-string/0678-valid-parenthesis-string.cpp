class Solution {
public:
    bool isValidString(int i, int openCount, string& s,vector<vector<int>>& dp) {
        if (i == s.size()) {
            return (openCount == 0);
        }

        if (dp[i][openCount] != -1) return dp[i][openCount];

        bool isValid = false;

        if (s[i] == '*') {
            // Treat '*' as '('
            isValid |= isValidString(i + 1, openCount + 1, s, dp);

            // Treat '*' as ')'
            if (openCount) {
                isValid |= isValidString(i + 1, openCount - 1, s, dp);
            }

            // Treat '*' as empty
            isValid |= isValidString(i + 1, openCount, s, dp);
        }

        else {
            if (s[i] == '(') {
                // Increment
                isValid = isValidString(i + 1, openCount + 1, s, dp);
            }

            // Decrement
            else if (openCount) {
                isValid = isValidString(i + 1, openCount - 1, s, dp);
            }
        }
        return dp[i][openCount] = isValid;
    }

    bool checkValidString(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return isValidString(0, 0, s, dp);
    }

};