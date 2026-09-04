class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        n=len(nums)
        l=0
        r=0
        while r<n :
            maxi=max(nums[l:r+1])
            mini=min(nums[r:n])
            diff=maxi - mini
            if diff<=k:
                return r
            r+=1
        return -1
