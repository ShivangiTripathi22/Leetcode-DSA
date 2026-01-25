class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i = 0;
        int j = 0;

        while (i < nums1.size()) {
            j = 0;

            while (j < nums2.size()) {
                if (nums1[i] == nums2[j]) {
                    ans.push_back(nums1[i]);
                    nums2[j] = -1;   
                    break;
                }
                j++;
            }
            i++;
        }
        return ans;
    }
};
