// ===  DATA STRUCTURES AND ALGORITHMS  ===
// 0007 REVERSE INTEGER

//  LEETCODE LINK: https://leetcode.com/problems/reverse-integer

// TIME COMPLEXITY: O(log10(n))
// SPACE COMPLEXITY: O(n)

#include <iostream>
#include <algorithm>
#include <climits>



class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int no = x % 10;
            x = x / 10;

            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && no > 7)) {
                return 0;
            }
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && no < -8)) {
                return 0;
            }

            rev = (rev * 10) + no;
        }
        return rev;
    }
};