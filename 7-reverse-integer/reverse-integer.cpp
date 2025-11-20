class Solution {
public:
    int reverse(int x) {
        long long rev = 0, rem = 0; 
        // int sign = x < 0 ? -1 : 1;
        // x = abs(x);
        
            while (x != 0) {
                rem = x % 10;
                rev = rev * 10 + rem;
                x = x / 10;
            }
            // rev=rev*sign;
        
         if (rev < INT_MIN || rev > INT_MAX) return 0;
         return (int)rev;

    }
};