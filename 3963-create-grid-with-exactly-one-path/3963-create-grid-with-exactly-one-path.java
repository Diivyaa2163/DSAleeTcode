class Solution {
    public String[] createGrid(int m, int n) {

        String[] grid = new String[m];

        grid[0] = ".".repeat(n);
        String row = "#".repeat(n-1) + ".";

        for (int i = 1; i < m; i++) {
            grid[i] = row;
        }
        return grid;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna