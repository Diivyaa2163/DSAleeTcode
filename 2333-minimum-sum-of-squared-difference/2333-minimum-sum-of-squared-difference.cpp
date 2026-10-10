class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long k = 1LL*k1+k2;

        vector<int> diff(nums1.size());

        int maxVal = 0;
        for (size_t i = 0; i < nums1.size(); i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            maxVal = max(maxVal, diff[i]);
        }

        int low = 0;
        int high = maxVal;
        while(low < high) {
            int mid = low + (high - low) / 2;

            long long operations = 0; 

            for (int d : diff) {
                if (d > mid) 
                operations += d - mid;
            }

            if (operations <= k) {
                high = mid;
            }

            else {
                low = mid + 1;
            }
        }

            int threshold = low;

            for (size_t i = 0; i < nums1.size(); i++) {
                if (diff[i] > threshold) {
                    k -= (diff[i] - threshold);
                    diff[i] = threshold;
                }
            }

            for (size_t i = 0; i < nums1.size() && k > 0; i++) {
                if (diff[i] == threshold && threshold > 0) {
                    diff[i]--;
                    k--;
                }
            }

            long long int answer = 0;
            for (long long d : diff) {
                answer += d * d;
            }

            return answer;
        }

};