class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int diaSum = 0;
        int n = mat.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    diaSum += mat[i][j];
                }
                else if (j == n-i-1) {
                    diaSum += mat[i][j];
                }
            }
        }
        return diaSum;
    }
};