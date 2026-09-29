class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        vector<char> isPrime(n, 1);
        int count = 1;

        // isPrime[0] = 0;
        // isPrime[1] = 0;

        for (int i = 3; i<n; i= i+2) {
            if(isPrime[i] == 1) {
                count++;

                if ((long long)i * i < n) {
                    for(long long j = (long long)i * i; j < n; j = j + (2*i)) {
                        isPrime[j] = 0;
                    } 
                }
            }
        }

        // int count = 0;
        // for (int i = 2; i < n; i++) {
        //     if (isPrime[i] == 1) {
        //         count++;
        //     }
        // }
        return count;
    }
};