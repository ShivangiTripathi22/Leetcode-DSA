class Solution {
public:
    
    int trailingZeroes(int n) {
    int count = 0;
    while (n > 0) {
        n /= 5;         // counts fives
        count += n;
    }
    return count;
}
};