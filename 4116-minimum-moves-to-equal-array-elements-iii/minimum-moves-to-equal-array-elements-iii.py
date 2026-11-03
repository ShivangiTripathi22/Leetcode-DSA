class Solution:
    def minMoves(self, nums: List[int]) -> int:
        maxi=0
        count=0
        for i in nums:
            maxi=max(maxi,i)

        for i in nums:
            if(maxi<i or maxi>i):
                count+=abs(i-maxi)

        return count