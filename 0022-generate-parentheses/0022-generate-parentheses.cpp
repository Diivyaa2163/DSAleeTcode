class Solution {
private:
    // TIME & SPACE COMPLEXITY: O(4^n / sq.root(n)) (CATALAN NUMBERS)

    void backtrack(int openPa, int closePa, int n, string& current, vector<string>& res) {

        // Valid iif closed = openpa = n
        if (openPa == n && closePa == n) {
            res.push_back(current);
            return;
        }

        // Add an openpa if openpa < n
        if (openPa < n) {
            current.push_back('(');
            backtrack(openPa + 1, closePa, n, current, res);
            current.pop_back();
        }

        // Add a closed parenthesis if closed < openPa
        if (closePa < openPa) {
            current.push_back(')');
            backtrack(openPa, closePa + 1, n, current, res);
            current.pop_back();
        }
    } 
public: 
    vector<string> generateParenthesis(int n) { 
        vector<string> res;
        string current = "";

        // Recursion Starting at (0, 0)
        backtrack(0, 0, n, current, res);

        return res;
        
    }
};