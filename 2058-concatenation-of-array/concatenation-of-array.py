class Solution:
    def getConcatenation(self, nums: list[int]) -> list[int]:
        ans=nums.copy()
        for i in nums:
            ans.append(i)
        return ans


     