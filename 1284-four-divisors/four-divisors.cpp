class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int total = 0;

        for (int i = 0; i < nums.size(); i++) {
            int count = 0, sum = 0;
            int n = nums[i];

            for (int j = 1; j * j <= n; j++) {
                if (n % j == 0) {
                    int d1 = j;
                    int d2 = n / j;

                    if (d1 == d2) {
                        count += 1;
                        sum += d1;
                    } else {
                        count += 2;
                        sum += d1 + d2;
                    }

                    if (count > 4) break;
                }
            }

            if (count == 4)
                total += sum;
        }

        return total;
    }
};
