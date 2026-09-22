class Solution {
public:
    int maxArea(vector<int>& height) {

        // 2 - POINTER APPROACH : LINEAR TIME COMPLEXITY (O(n))

        int lp = 0;
        int rp = height.size() - 1;
        int maxWatr = 0;

        while (lp < rp) {
            int wt = rp - lp;
            int ht = min(height[lp], height[rp]);
            int curWatr = wt * ht;
            maxWatr = max(maxWatr, curWatr);

            // Updating controlling (minimum of height) variable
            // Ternary Operator (If statement)
            height[lp] < height[rp] ? lp++ : rp--;
        }

        return maxWatr;


        // BRUTE FORCE APPROACH (O(n^2))
        // int maxWatr = 0;

        // for (int i = 0; i < height.size(); i++) {
        //     for (int j = i+1; j < height.size(); j++) {
        //         int w = j - i;
        //         int ht = min(height[i], height[j]);

        //         int curWatr = w * ht;
        //         maxWatr = max(maxWatr, curWatr);
        //     }
        // }
        // return maxWatr;
    }
};