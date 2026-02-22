class Solution {
public:
    int binaryGap(int n) {
        int binary[32];
        int i = 0;

        
        while (n > 0) {
            binary[i] = n % 2;
            n /= 2;
            i++;
        }

        int last = -1;
        int maxGap = 0;

        for (int j = 0; j < i; j++) {
            if (binary[j] == 1) {
                if (last != -1) {
                    maxGap = max(maxGap, j - last);
                }
                last = j;
            }
        }

        return maxGap;
    }
};
