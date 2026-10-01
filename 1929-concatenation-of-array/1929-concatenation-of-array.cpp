class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            ans.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            ans.push_back(x);
        }

        return ans;
    }
};