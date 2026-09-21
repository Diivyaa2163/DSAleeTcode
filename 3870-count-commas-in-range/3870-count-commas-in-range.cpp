class Solution {
public:
    int countCommas(int n) {
        long long totalSum = 0;

        if (n >= 1000) {
            totalSum += (n - 999);
        }

        if (n >= 10000000) {
            totalSum += (n - 999999);
        }

        if (n >= 1000000000) {
            totalSum += (n - 999999999);
        }
        // int rem;
        // if ((n / 10) >= 1000) {
        //     n = n / 1000; 
        //     rem = n % 1000;
        //     cout << n << ", ";
        //     cout << rem ;
        // }
        return totalSum;
    }
};