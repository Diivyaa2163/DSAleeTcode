class Solution {
public:
    bool isValid(string s) {
        // TIME COMPLEXITY: O(N)
        // SPACE COMPLEXITY: O(N)
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            char current = s[i];
            
            if (current == '(' || current == '[' || current == '{' ) {
                st.push(current);
            }

            else {
                if (st.empty()) {
                    return false;
                }

                char topElement = st.top();

                if ((current == ')' && topElement == '(') || (current == '}' && topElement == '{') || (current == ']' && topElement == '[')) {
                    st.pop();
                }

                else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};