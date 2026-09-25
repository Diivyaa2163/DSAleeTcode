class Solution {
public:
    void sortColors(vector<int>& nums) {

        // M2: DUTCH NATIONAL FLAG ALGORITHM
        int n = nums.size();
        int low = 0, mid = 0, high = n -1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }

            else if (nums[mid] == 1) {
                mid++;
            }

            else {
                swap(nums[high], nums[mid]);
                high--;
            }
        }

        // M3: 2 Passes of O(n)
        // int n = nums.size();
        // int count0 = 0, count1 = 0, count2 = 0;

        // for (int i = 0; i<n; i++) {
        //     if(nums[i] == 0) {
        //         count0++;
        //     }
        //     else if(nums[i] == 1) {
        //         count1++;
        //     }
        //     else count2++;
        // }

        // int id = 0;
        // for (int i = 0; i<count0; i++) {
        //     nums[id++] = 0;
        // }
        // for (int i = 0; i<count1; i++) {
        //     nums[id++] = 1;
        // }
        // for (int i = 0; i<count2; i++) {
        //     nums[id++] = 2;
        // }
    }
};