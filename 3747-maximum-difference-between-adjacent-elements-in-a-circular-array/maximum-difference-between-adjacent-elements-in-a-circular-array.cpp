class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int dif = abs( nums[n - 1]-nums[0]);
        for (int i = 1; i < n; i++) {
            int diff = abs(nums[i] - nums[i - 1]);
            maxi = diff > maxi ? diff : maxi;
        }

        maxi = dif > maxi ? dif : maxi;
        return maxi;
    }
};