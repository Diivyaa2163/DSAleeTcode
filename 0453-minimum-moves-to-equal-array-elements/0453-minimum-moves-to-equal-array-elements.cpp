class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();

        int sum = accumulate(begin(nums), end(nums), 0);
        int min_el = *min_element(begin(nums), end(nums));

        return sum - n*min_el;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna