class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // TIME COMPLEXITY: O(logn); SPACE COMPLEXITY: O(1)
        int n = nums.size();

        // EDGE CASES FOR Single element array
        if (n == 1) {
            return nums[0];
        }
        
        int st = 0, end = n - 1;

        while (st <= end) {
            int mid = st + (end - st)/2;

            // EDGE CASES when single element is at the very beginning
            if(mid == 0 && nums[0] != nums[1]) {
                return nums[mid];
            }

            if (mid == n-1 && nums[mid-1] != nums[mid-2]) {
                return nums[mid];
            }

            if(nums[mid - 1] != nums[mid] && nums[mid] != nums[mid+1]) {
                return nums[mid];
            }

            // Even Number of elements
            if (mid % 2 == 0) {
                if (nums[mid - 1] == nums[mid]) {
                    end = mid - 1;
                }

                else {
                    st = mid + 1;
                }
            }

            // ODD Number of Elements
            else {
                if (nums[mid-1] == nums[mid]) {
                    st = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }

        return -1;
        
    }
};