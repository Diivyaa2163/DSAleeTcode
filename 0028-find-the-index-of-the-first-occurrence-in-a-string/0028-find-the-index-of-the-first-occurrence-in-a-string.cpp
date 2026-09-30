class Solution {
public:
    int strStr(string haystack, string needle) {
        int hLen = haystack.length();
        int nLen = needle.length();

        // EDGE CASE: If needle is longer than the haystack
        if (hLen < nLen) {
            return -1;
        }

        // SLIDING WINDOW
        // Stops at (hLen - nLen) to avoid checking when there isn't enough room left
        for (int i = 0; i <= hLen - nLen; i++) {
            int j = 0;
            
            while (j < nLen && haystack[i+j] == needle[j]){
                j++;
            }
            
            if (j == nLen) {
                return i;
            }
        }
        return -1;
    }
};