class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int st = nums[0];
        int j = nums[n - 1];

        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[nums[i]];
        }

        for (int i = st; i <= j; i++) {
            if (mpp.find(i) == mpp.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};