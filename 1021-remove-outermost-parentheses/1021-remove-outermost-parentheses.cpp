class Solution {
public:
    string removeOuterParentheses(string s) {
        // TIME COMPLEXITY: O(n)
        // SPACE COMPLEXITY: O(n)
        int count = 0;
        string result = "";

        for (char &ch : s) {
            if (ch == '(') {
                // If count > 0, its not the outermost bracket so keep it
                if (count != 0) {
                    result.push_back(ch);
                }
                // Increases depth or count of open bracket
                count++;
            }
            else{
                // Increases depth or count of open bracket
                count--;
                if(count != 0) {
                // If count > 0, its not the outermost bracket so keep it
                    result.push_back(ch);
                }
            }
        }
        return result;
    }
};