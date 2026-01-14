class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        
       
        for (int start = 0; start + 2 * k <= n; start++) {
            bool first = true, second = true;
           
            for (int i = start; i < start + k - 1; i++) {
                if (nums[i] >= nums[i + 1]) {
                    first = false;
                    break;
                }
            }
            
            for (int i = start + k; i < start + 2 * k - 1; i++) {
                if (nums[i] >= nums[i + 1]) {
                    second = false;
                    break;
                }
            }
            
            if (first && second) return true;
        }
        
        return false;
    }
};
