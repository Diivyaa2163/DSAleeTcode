class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Outer loop 
        for (int i = 0; i < nums.size() ; i++) {

            // Inner Loop
            for (int j = (i+1); j < nums.size() ; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
