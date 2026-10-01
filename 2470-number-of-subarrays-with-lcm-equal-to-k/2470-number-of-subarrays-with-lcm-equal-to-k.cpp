class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        // TIME COMPLEXITY: O(n^2 logk)
        // SPACE COMPLEXITY: O(1)
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {

            long long currentLcm = nums[i];

            if (currentLcm == k) {
                count++;
            }

            for (int j = i+1; j < n; j++) {
                currentLcm = (currentLcm * nums[j]) / gcd(currentLcm, nums[j]);

                if (currentLcm == k) {
                    count++;
                }

                else if (currentLcm > k) {
                    break;
                }
                
            }
        }
        return count;
    }
};