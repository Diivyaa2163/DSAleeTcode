class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        // TIME COMPLEXITY: O(N)
        int n = mat.size();
        int diaSum = 0;
        for (int i = 0; i < n; i++) {
            diaSum += mat[i][i];

            if (i != n - i -1) {
                diaSum += mat[i][n-i-1];
            }
        }
        return diaSum;
    }
};