class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int maxSum = INT_MIN;

        int maxLeft = INT_MIN;

        // Outer Loop (First number of the pair)
        for (int i = k; i < nums.size(); i++) {
            
            maxLeft = max(maxLeft, nums[i-k]);

            int pairSum = maxLeft + nums[i];

            maxSum = max(maxSum, pairSum);
        
        }
        return maxSum;
    }
};