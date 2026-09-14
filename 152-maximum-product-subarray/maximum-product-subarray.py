class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        current=1
        pre=1
        maxi_pro=float('-inf') 
        for i in range(len(nums)):
            if current == 0:
                current = 1
            if pre == 0:
                pre = 1
            current=current*nums[i]
            pre=pre*nums[len(nums)-i-1]
            maxi_pro=max(maxi_pro,current,pre)

        return maxi_pro
