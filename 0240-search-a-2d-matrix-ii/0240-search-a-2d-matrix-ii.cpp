class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) { 
        int m = mat.size();
        int n = mat[0].size();
        int ro = 0, co = n - 1;

        while (co >= 0 && ro < m) {

            if (target == mat[ro][co]) {
                return true;
            }

            else if (target < mat[ro][co]) {
                co --;
            }

            else if (target > mat[ro][co]) {
                ro ++;
            }
        }
        return false;
    }
};