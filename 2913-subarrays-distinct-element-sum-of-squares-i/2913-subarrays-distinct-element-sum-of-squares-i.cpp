class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return 1;
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                unordered_set<int> st(nums.begin() + i, nums.begin()+j);
                ans += st.size() * st.size();
            }
        }
        return ans;
    }
};