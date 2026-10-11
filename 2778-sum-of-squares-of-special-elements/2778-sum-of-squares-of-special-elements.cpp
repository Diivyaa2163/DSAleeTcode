class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        // TIME COMPLEXITY: O(N)
        // SPACE COMPLEXITY: O(1)
        int n = nums.size();
        int sum = 0;

        for (int i = 1; i <= n; i++) {
            if ((n % i) == 0) {
                int special = nums[i-1];
                sum += special*special;
            }
        }
        return sum;
    }
};