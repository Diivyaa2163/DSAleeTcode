class Solution {
public:

    bool isValid(vector<int> &nums, int n, int m, int maxAllowedPages) { // O(n)
        int students = 1, pages = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > maxAllowedPages) {
                return false;
            }

            if (pages + nums[i] <= maxAllowedPages) {
                pages += nums[i];
            }

            else {
                students++;
                pages = nums[i];
            }
        }
        return students > m ? false : true;
    }
    int splitArray(vector<int>& nums, int k) { //O(logn * n)
        int n = nums.size();
        int m = k;
        if (m > n) {
            return -1;
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }

        int ans = -1; 
        int st = 0, end = sum;  // Range of possible ans

        while (st <= end) {  // O(logn) (O(logRange))  = O(logn * n)
            int mid = st + (end - st)/2;

            if (isValid(nums, n, m, mid)) { //Left
                ans = mid;
                end = mid - 1;
            }

            else {  // Right
                st = mid + 1;
            }
        }

        return ans;
        
    }
};