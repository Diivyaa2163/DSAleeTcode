class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long maxStrength = 0;
        int n = nums.size();

        // Sliding Window (Checks every unique pair)
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j<n; j++) {

                long long x = nums[i];
                long long y = nums[j];

                long long currentGcd = std::gcd(x, y);

                long long strength = (x*y) / (currentGcd*currentGcd);

                if (strength > maxStrength) {
                    maxStrength = strength;
                }
            }
        }
        return maxStrength;
    }
};