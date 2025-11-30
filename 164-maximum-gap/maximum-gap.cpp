class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxi = 0;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            int diff = abs(nums[i] - nums[i - 1]);
            maxi = max(maxi, diff);
        }
        return maxi;
    }
};