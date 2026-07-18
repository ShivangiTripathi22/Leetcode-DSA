class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=nums[0];
        int j=nums[n-1];
        for (int k = i; k >= 1; k--) {
            if (i % k == 0 && j % k == 0)
                return k;
        }
        return 1;
    }
};