class Solution {
public:
    string removeOuterParentheses(string s) {
        // TIME COMPLEXITY: O(n)
        // SPACE COMPLEXITY: O(n)
        int count = 0;
        string result = "";

        for (char &ch : s) {
            if (ch == '(') {
                if (count != 0) {
                    result.push_back(ch);
                }
                count++;
            }
            else{
                count--;
                if(count != 0) {
                    result.push_back(ch);
                }
            }
        }
        return result;
    }
};