class Solution {
public:
    int longestValidParentheses(string s) {
        // M1: STACK OPTIMIZE APPORACH
        // TIME COMPLEXITY: O(N)
        // SPACE COMPLEXITY: O(N)

        int n = s.size();
        stack<int> st;
        st.push(-1);
        int maxlen = 0;
        for(int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(i);
            }
            else {
                st.pop();
                if (st.empty()) {
                    st.push(i);
                }
                maxlen = max(maxlen, i-st.top());
            }
        }
        return maxlen;
    }
};


        // // M1: BRUTE FORCE APPROACH
        // // TIME COMPLEXITY : O(N^2)
        // // SPACE COMPLEXITY: O(1)
        // int n = s.length();
        // int maxLeng = 0;
        // for (int i = 0; i < n; i++) {
        //     int balance = 0;
        //     for (int j = i; j < n; j++) {
        //         if (s[j] == '(') {
        //             balance++;
        //         }

        //         else if(s[j] == ')') {
        //             balance--;
        //         }

        //         if (balance < 0) {
        //             break;
        //         }

        //         if (balance == 0) {
        //         maxLeng = max(maxLeng, j-i+1);
        //         }

        //     }
        // }
        // return maxLeng;