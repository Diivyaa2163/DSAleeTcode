class Solution {
public:
    int minAddToMakeValid(string s) {
        // TIME COMPLEXITY: O(N)
        // SPACE COMPLEXITY: O(1)
        int openSt = 0;
        int closSt = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                closSt++;
            }

            else if (s[i] == ')') {
                if (closSt > 0) {
                    closSt--;
                }

                else {
                    openSt++;
                }
            }
        }
        return openSt + closSt;
    }
};


        // // TIME COMPLEXITY: O(N)
        // // SPACE COMPLEXITY: O(N)
        // stack<char> st;
        // for (int i = 0; i < s.length(); i++) {
        //     if (s[i] == '(') {
        //         st.push(s[i]);
        //     }

        //     else if (!st.empty() && st.top() == '(') {
        //         st.pop();
        //     }

        //     else {
        //         st.push(s[i]);
        //     }
        // }
        // return st.size();