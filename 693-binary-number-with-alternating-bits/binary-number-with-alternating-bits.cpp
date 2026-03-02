class Solution {
public:
    bool hasAlternatingBits(int n) {
        if (n == 0)
            return 0;
        vector<int> binary;
        while (n > 0) {
            int remainder = n % 2;
            binary.push_back(remainder);
            n /= 2;
        }
        reverse(binary.begin(), binary.end());
    
    for (int i = 1; i < binary.size(); i++) {
        if (binary[i-1] == binary[i])
            return false;
    }
    return true;
    }
};