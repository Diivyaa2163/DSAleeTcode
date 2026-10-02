class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        // TIME COMPLEXITY: O(N^2)
        // SPACE COMPLEXITY: O(N)
        int diaSum = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat.size(); j++) {
                if (i == j) {
                    diaSum += mat[i][j];
                }
                else if (j == mat.size()-i-1) {
                    diaSum += mat[i][j];
                }
            }
        }
        return diaSum;
    }
};