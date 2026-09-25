class Solution {
public:

    bool isPossible(const vector<int>& weights, int n, int m, int maxAllowedWeights) {

        int pieces = 1; 
        int count = 0;

        for (int i = 0; i < n; i++) {  // O(n)
            if (count + weights[i] <= maxAllowedWeights) {
                count += weights[i];
            }
            else {
                pieces++;
                count = weights[i];
            }
        }
        return pieces <= m;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int sum = 0;
        int maxVal = INT_MIN;

        int n = weights.size();
        int m = days;

        
        for (int i = 0; i<n; i++) {  // O(n)
            sum += weights[i];
            maxVal = max(maxVal, weights[i]);
        }

        int st = maxVal;
        int end = sum;
        int ans = -1;

        while (st <= end) {
            int mid = st + (end - st)/2;

            // LEFT
            if (isPossible(weights, n, m, mid)) { // True
                ans = mid;
                end = mid - 1;
            }

            // RIGHT
            else { // False
                st = mid + 1;
            }
        }
        return ans;
        
    }
};