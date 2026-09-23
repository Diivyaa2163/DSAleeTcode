class Solution {
public:
    int search(vector<int>& nums, int target) {

        // BINARY SEARCH (TIME COMPLEXITY : O(logn))
        int st = 0;
        int end = nums.size() - 1;

        // Initialization
        while (st <= end) {
            int mid = st + (end-st)/2;
            if (nums[mid] == target) {
                return mid;
            }

            // Left Half Sorted Condition
            if(nums[st] <= nums[mid]) {
                // Binary Search
                if (nums[st] <= target && target <= nums[mid]) 
                {
                    // LEFT SEARCH
                    end = mid - 1;
                }
                else {
                    // RIGHT SEARCH
                    st = mid + 1;
                }
            }
            else {
                // Right Half Sorted Condition
                if (nums[mid] <= target && target <= nums[end]) 
                {
                    // RIGHT SEARCH
                    st = mid + 1;
                }

                else {
                    //LEFT SEARCH
                    end = mid - 1;
                }
            }
        }
        return -1;    
    }
};