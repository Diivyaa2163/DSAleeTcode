// ===  DATA STRUCTURES AND ALGORITHMS  ===
// 0028 FIND THE INDEX OF THE FIRST OCCURENCE

//  LEETCODE LINK: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

// Time Complexity: O(N.M); 
// Space Complexity: O(1)


#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <iterator>
#include <cstring>



class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
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