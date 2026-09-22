class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // M1:  Prefix * Suffix [ Time Complexity = O(3n) == O(n); Space Complexity = O(1) ]
        int n = nums.size();
        vector<int> ans(n, 1);

        // Storing variable value of prefix & suffix within the ans itself
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i-1] * nums[i-1];
        }

        // Time Complexity: O(n); Space Complexity: O(1)
        int suffix = 1;
        for (int i = (n - 2); i >= 0; i--) {
            suffix *= nums[i+1];    // ith suffix
            ans[i] *= suffix;
        }

        return ans;







    // //M2: Prefix * Suffix [ Time Complexity = O(3n) == O(n); Space Complexity = O(3n) == O(n) ]
    // int n = nums.size();
    // vector<int> ans(n, 1);

    // // Time Complexity: O(n); Space Complexity: O(n)
    // vector<int> prefix(n, 1);
    //     prefix[0] = 1;
    // for (int i = 1; i < n; i++) {
    //     prefix[i] = prefix[i-1] * nums[i-1];
    // }

    // // Time Complexity: O(n); Space Complexity: O(n)
    // vector<int> suffix(n, 1);
    //     suffix[n-1] = 1;
    // for (int i = (n - 2); i >= 0; i--) {
    //     suffix[i] = suffix[i+1] * nums[i+1];
    // }

    // // Time Complexity: O(n); Space Complexity: O(n)
    // for (int i = 0; i < n; i++) {
    //     ans[i] = prefix[i] * suffix[i];
    // }
    // return ans;


    //    // M2: BRUTE FORCE APPROACH (O(n^2))
    //     int n = nums.size();

    //     vector<int> ans(n, 1);
        
    //     for (int i = 0; i < n; i++) {
    //         for (int j = 0; j < n; j++){ 
    //         if (i != j) {
    //             ans[i] *= nums[j];
    //         }
    //     }
    // }
    // return ans;
    }
   
};