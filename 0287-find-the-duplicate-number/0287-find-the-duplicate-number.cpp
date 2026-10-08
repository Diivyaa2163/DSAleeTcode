class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        // "SLOW-FAST POINTER" METHOD
        // TIME COMPLEXITY: O(N)
        // SPACE COMPLEXITY: O(1)
        int slow = arr[0];
        int fast = arr[0];

        do {
            slow = arr[slow]; //+ 1;
            fast = arr[arr[fast]]; // + 2;
        }

        while (slow != fast); {
            slow = arr[0];
        }

        while (slow != fast) {
            slow = arr[slow]; //+1;
            fast = arr[fast]; //+1;
        }

        return slow;
    }
};



        // // TIME COMPLEXITY: O(N)
        // // SPACE COMPLEXITY: O(N)
        // unordered_set<int> s;

        // for(int val : nums) {
        //     if(s.find(val) != s.end()) {
        //         return val;
        //     }

        //     s.insert(val);
        // }

        // return -1;