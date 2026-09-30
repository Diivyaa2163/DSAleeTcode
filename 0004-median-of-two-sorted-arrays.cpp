 // ===  DATA STRUCTURES AND ALGORITHMS  ===
 // 0004 MEDIAN OF TWO SORTED ARRAYS

//  LEETCODE LINK: https://leetcode.com/problems/median-of-two-sorted-arrays
 

// Time Complexity: O(log(min(m, n)))
// Space Complexity: O(1) Constant Space


#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <climits>
#include <iterator>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        // Time Complexity: O(log(min(m, n)))
        // Space Complexity: O(1) Constant Space
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int x = static_cast<int>(nums1.size());
        int y = static_cast<int>(nums2.size());
        int low = 0;
        int high = x;

        while (low <= high) {
            int partitionX = (low + high) / 2;
            int partitionY = (x + y + 1) / 2 - partitionX;

            int maxLeftX = (partitionX == 0 || nums1.empty()) ? INT_MIN : nums1[partitionX - 1];
            int minRightX = (partitionX >= x || nums1.empty()) ? INT_MAX : nums1[partitionX];

            int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
            int minRightY = (partitionY >= y || nums2.empty()) ? INT_MAX : nums2[partitionY];

            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
                if ((x + y) % 2 == 0) {
                    return ((double)std::max(maxLeftX, maxLeftY) + std::min(minRightX, minRightY)) / 2.0;
                }

                else {
                    return (double)std::max(maxLeftX, maxLeftY);
                }
            }

            else if (maxLeftX > minRightY) {
                high = partitionX - 1;
            }

            else {
                low = partitionX + 1;
            }
        }

        return 0.0;
    }
};