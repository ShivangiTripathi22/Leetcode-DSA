class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        bool visited = 1;
        while (visited) {
            visited = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == original) {
                    original = nums[i] * 2;
                    visited = 1;
                }
            }
        }
        return original;
    }
};