class Solution {
public:
    // TIME COMPLEXITY: O(log(mn))
    bool searchInRow(vector<vector<int>>& mat, int target, int row) {
        int n = mat[0].size();
        int st = 0;
        int er = n - 1;

        while (st <= er) {
            int mid = st + (er - st) / 2;
            if (target == mat[row][mid]) {
                return true;
            }

            else if (target > mat[row][mid]) {
                st = mid + 1;
            }

            else {
                er = mid - 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        // Binary Search on tot rows
        int m = mat.size();
        int n = mat[0].size();
        int sr = 0;
        int er = m - 1;

        while (sr <= er){
            int mid = sr + (er - sr)/2;

            if (target <= mat[mid][n-1] && target >= mat[mid][0]) {
                // Found the row => Bs on this row
                return searchInRow(mat, target, mid);
            }

            else if (target >= mat[mid][n-1]) {
                // down => right
                sr = mid + 1;
            }

            else if (target < mat[mid][0]) {
                er = mid - 1; 
            }
        }
        return false;
    }
};