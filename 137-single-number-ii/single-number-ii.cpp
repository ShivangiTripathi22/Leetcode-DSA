class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i = i + 3) {
            if (nums[i] != nums[i + 1] && nums[i] != nums[i + 2]) {
                return nums[i];
            }
        }
        return nums.back();
    }
};