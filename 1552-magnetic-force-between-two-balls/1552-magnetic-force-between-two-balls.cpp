class Solution {
public:

    bool isPossible(vector<int> &position, int m, int minAllowedDistance) {  //O(n)
        int ballsPlaced = 1;
        int lastPos = position[0];
        int n = position.size();

        for (int i = 1; i<n; i++) {
            if ((position[i] - lastPos) >= minAllowedDistance) {
                ballsPlaced ++;
                lastPos = position[i];
            }
            if(ballsPlaced == m) {
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        sort(position.begin(), position.end());  // (N*LogN)
        int n = position.size();

        int st = 1;
        int end = position[n-1] - position[0];
        int ans = -1;

        while (st <= end) {  // O(log(Range)*n)
            int mid = st + (end - st)/2;

            if (isPossible(position, m, mid)) {  // Right
                ans = mid;
                st = mid + 1;
            }

            else {
                end = mid - 1;
            }
        }
        return ans;
    }
};