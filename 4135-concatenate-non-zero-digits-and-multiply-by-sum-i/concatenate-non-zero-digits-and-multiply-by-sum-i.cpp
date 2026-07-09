class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0, x=0;
        long long rem = 0;
        long long value=1;
        while (n > 0) {
            rem = n % 10;
            if (rem != 0) {
                x = rem*value + x;
                value=value*10;
                 sum += rem;
            }
     
            n=n/10;
        }
        return x * sum;
    }
};