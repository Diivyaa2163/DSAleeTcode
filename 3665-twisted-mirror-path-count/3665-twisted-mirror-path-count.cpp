class Solution {
public:
    int LEFT = 0;
    int UP = 1;
    int MOD = 1e9 + 7;
    int m, n;

    int uniquePaths(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        vector<vector<array<int, 2>>> t(m, vector<array<int, 2>>(n, {0, 0}));

        t[0][0][LEFT] = 1;

        for (int col = 1; col < n; col++) {
            t[0][col][LEFT] = 1;
            if (grid[0][col] == 1)
                break;
        }

        for (int row = 1; row < m; row++) {
            t[row][0][UP] = 1;
            if (grid[row][0] == 1)
                break;
        }

        for (int row = 1; row < m; row++) {
            for (int col = 1; col < n; col++) {
                if (grid[row][col - 1] == 1) {
                    t[row][col][LEFT] = t[row][col - 1][UP];
                }

                else {
                    t[row][col][LEFT] = (t[row][col - 1][LEFT] + t[row][col - 1][UP]) % MOD;
                }
                if (grid[row - 1][col] == 1) {
                    t[row][col][UP] = t[row - 1][col][LEFT];
                }
                else {
                    t[row][col][UP] = (t[row - 1][col][LEFT] + t[row - 1][col][UP]) % MOD;
                }
            }
        }
        return (t[m - 1][n - 1][LEFT] + t[m - 1][n - 1][UP]) % MOD;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna