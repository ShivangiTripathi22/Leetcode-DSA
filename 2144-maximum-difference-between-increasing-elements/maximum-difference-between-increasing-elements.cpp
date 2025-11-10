class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int i = 0, sub = -1;
        int j = 1;

        while (j < nums.size()) {
            if (nums[i] < nums[j]) {
                sub = max(sub, nums[j] - nums[i]);
            } else
                i = j;

            j++;
        }

        return sub;
    }
};