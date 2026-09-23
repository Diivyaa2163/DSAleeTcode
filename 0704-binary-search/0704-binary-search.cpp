class Solution {
public:

    // M1: BINARY SEARCH (RECURSIVE APPROACH)
    int recBinarySearch(vector<int>& nums, int target, int st, int end) {
        if (st <= end) {
            int mid = st + (end - st) / 2;
            if (target > nums[mid]) {
                return recBinarySearch(nums, target, mid + 1, end);
            } else if (target < nums[mid]) {
                return recBinarySearch(nums, target, st, mid - 1);
            } else {
                return mid;
            }
        }
        return -1; 
    }

    // LEETCODE BOILERPLATE (Exactly as provided)
    int search(vector<int>& nums, int target) {
        
        // use the boilerplate to call custom tool!
        return recBinarySearch(nums, target, 0, nums.size() - 1);
        
    }
};
    // int search(vector<int>& nums, int target) {

        // // M1: BINARY SEARCH (ITERATIVE APPROACH)
        // int st = 0;
        // int end = nums.size() - 1;

        // while (st <= end) {
        //     int mid = st + (end-st) / 2;

        //     if (target > nums[mid]) {
        //         st = mid + 1;
        //     }

        //     else if (target < nums[mid]) {
        //         end = mid - 1;
        //     }

        //     else {
        //         return mid;
        //     }
        // }

        // return -1;
     // } 
    // }; 