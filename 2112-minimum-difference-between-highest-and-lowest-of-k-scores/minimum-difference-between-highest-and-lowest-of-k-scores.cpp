class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int mindiff=INT_MAX;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=k-1;
        while(j<nums.size()){
            int maxi=nums[j];
            int mini=nums[i];
            int diff=maxi-mini;

            mindiff=min(diff,mindiff);
            i++;
            j++;
        }
        return mindiff;
    }
};