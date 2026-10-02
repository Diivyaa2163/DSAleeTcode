class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        // TIME COMPLEXITY: O(m*n)
        // SPACE COMPLEXITY: O(1)
        int maxOnes = 0;
        int bestRowIndex = 0;

        for (int i = 0; i < mat.size(); i++) {
            int currentOnes = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) {
                    currentOnes++;
                }
            }

            if (currentOnes > maxOnes) {
                maxOnes = currentOnes;
                bestRowIndex = i;
            }
        }
        return {bestRowIndex, maxOnes};
    }
};