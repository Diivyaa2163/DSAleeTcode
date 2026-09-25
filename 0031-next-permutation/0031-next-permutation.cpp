class Solution {
public:
    void nextPermutation(vector<int>& A) {
        
        // next_permutation(A.begin(), A.end());
        // TC: O(n), SC: O(1)
        int n = A.size();
        int pivot = -1;
        for (int i = n-2; i>=0; i--) {
            if(A[i] < A[i+1]) {
                pivot = i;
                break;
            }
        }

        // EDGE CASE FOR DESCENDING ORDER ARRAY
        if (pivot == -1) {
            reverse(A.begin(), A.end());
            return;
        }

        // 2nd STEP: NEXT LARGER ELEMENT
        for (int i = n-1; i>pivot; i--) {
            if (A[i] > A[pivot]) {
                swap(A[i], A[pivot]);
                break;
            }
        }

        // 3rd step: REVERSE (pivot+1 to n-1)
        reverse(A.begin() + pivot + 1, A.end());

    }
};