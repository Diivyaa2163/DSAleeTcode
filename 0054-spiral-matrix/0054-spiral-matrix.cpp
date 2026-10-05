class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        // TIME COMPLEXITY: O(M*N)
        // SPACE COMPLEXITY: O(1)
        int m = mat.size();
        int n = mat[0].size();
        int starow = 0;
        int endrow = m-1;
        int endcol = n - 1;
        int stacol = 0;
        vector<int> ans;

        while (stacol <= endcol && starow <= endrow) {
            // Top
            for (int j = stacol;  j <= endcol; j++) {
                ans.push_back(mat[starow][j]);
            }


            // RIGHT
            for (int i = starow+1;  i <= endrow; i++) {
                ans.push_back(mat[i][endcol]);
            }

            // BOTTOM 
            for (int j = endcol-1;  j >= stacol; j--) {
                if (starow == endrow) {
                    break;
                }
                ans.push_back(mat[endrow][j]);
            }

            // LEFT
            for (int i = endrow - 1;  i >= starow+1; i--) {
                if (stacol == endcol) {
                    break;
                }
                ans.push_back(mat[i][stacol]);
            }

            starow++;
            endrow--;
            stacol++;
            endcol--;

        }
        return ans;
    }
};