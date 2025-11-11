class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=nums.size()-1;
        for(int j=0;j<nums.size();j++){
            for(int i=j+1;i<nums.size()&& i-j<=k;i++){
            if(nums[i]==nums[j]){
                return 1;
            }
        }
        }
            
        return 0;
    }
};