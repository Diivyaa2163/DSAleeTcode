class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // FLOYYD'S ALGORITHM
        // TIME COMPLEXITY: O(N)
        unordered_map<int, int> m;
        vector<int> ans;

        for (int i = 0; i<arr.size(); i++) {
            int first = arr[i];
            int sec = target - first;

            if (m.find(sec) != m.end()) {
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }

            m[first] = i;
        }
        return ans;
    }
};



        // // TIME COMPLEXITY: O(N^2)
        // // BRUTE FORCE APPROACH
        // // Outer loop 
        // for (int i = 0; i < nums.size() ; i++) {

        //     // Inner Loop
        //     for (int j = (i+1); j < nums.size() ; j++) {
        //         if (nums[i] + nums[j] == target) {
        //             return {i, j};
        //         }
        //     }
        // }
        // return {};