class Solution {
public:
    int n;
    unordered_set<string> st;
    int maxLength;
    // BACKTRACKING METHOD
    void solvfun(string& s, int i, string& current, int count) {
        if (count < 0) {
            return;  // Early Prunning
        }

        else if (i == n) {
            if (count == 0) {
                if (current.length() > maxLength) {
                    maxLength = current.length();
                    st.clear();
                }
                    
                if (current.length() == maxLength) {
                    st.insert(current);
                }
            }
            return;
        }   

        if (s[i] != '(' && s[i] != ')') {  // Alphabet
            current.push_back(s[i]);
            solvfun(s, i+1, current, count);
            current.pop_back();
            return;
        }

        current.push_back(s[i]);

        solvfun(s, i+1, current, count + (s[i] == '(' ? 1 : -1));

        current.pop_back();

        solvfun(s, i+1, current, count);
        
    }

    vector<string> removeInvalidParentheses(string s) {
        // TIME COMPLEXITY: O(2^N)
        // SPACE COMPLEXITY: O(M*N)
        n = s.length();
        st.clear();
        maxLength = 0;
        string current = "";

        solvfun(s, 0, current, 0);

        return vector<string>(begin(st), end(st));
    }
};