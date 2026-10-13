class Solution {
public:  
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        // TIME COMPLEXITY: O(nlogn); SPACE COMPLEXITY: O(1)
        sort(nums.begin(), nums.end(), [](int a, int b){
            return abs(a) > abs(b);
        });

        int st = 0;
        int end = n - 1;
        int mid = st + (end-st)/2;
        long long sum = 0;
        long long sum1 = 0;
        long long sum2 = 0;

        for (int i = 0; i <= mid; i++) {
            sum1 += 1LL * nums[i]*nums[i]; 
        }

        for (int j = mid+1; j < n; j++) {
            sum2 += 1LL * nums[j]*nums[j]; 
        }

        return sum1 - sum2;
    }
};