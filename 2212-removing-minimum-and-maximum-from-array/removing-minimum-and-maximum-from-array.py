class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        max_val=min_val=nums[0]
        max_idx=min_idx=0

        n=len(nums)

        if n==1:
            return 1

        for idx,val in enumerate(nums):
            if val>max_val:
                max_val=val
                max_idx=idx

            if val<min_val:
                min_val=val
                min_idx=idx

        left = min(min_idx, max_idx)
        right = max(min_idx, max_idx)

        front=right+1
        back=n-left
        both=(1+left)+(n-right)

        return min(front,back,both)
        
