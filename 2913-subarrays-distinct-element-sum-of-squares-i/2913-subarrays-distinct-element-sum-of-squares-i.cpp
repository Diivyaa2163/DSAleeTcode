class Solution {
public:
    int sumCounts(vector<int>& nums) {
        if (nums.size() == 1) {
            return 1;
        }
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j <= nums.size(); j++) {
                unordered_set<int> st(nums.begin() + i, nums.begin()+j);
                ans += st.size() * st.size();
            }
        }
        return ans;
    }
};