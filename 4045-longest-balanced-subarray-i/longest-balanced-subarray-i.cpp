class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int ans = 0;
        for (int j = 0; j < nums.size(); j++) {
            unordered_set<int> odd_num, even_num;

            for (int i = j; i < nums.size(); i++) {
                if (nums[i] % 2 == 0)
                    even_num.insert(nums[i]);
                else
                    odd_num.insert(nums[i]);

                if (odd_num.size() == even_num.size())
                    ans = max(ans, i - j + 1);
            }
        }

        return ans;
    }
};
