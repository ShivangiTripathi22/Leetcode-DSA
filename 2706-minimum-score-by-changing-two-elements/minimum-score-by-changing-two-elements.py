class Solution:
    def minimizeSum(self, nums: List[int]) -> int:
        max1, max2, max3 = 0, 0, 0
        min1, min2, min3 = 10**9 + 1, 10**9 + 1, 10**9 + 1

        if len(nums) == 3:
            return 0

        for i in nums:
            if max1 < i:
                max1, max2, max3 = i, max1, max2

            elif max2 < i:
                max2, max3 = i, max2

            elif max3 < i:
                max3 = i

            if min1 > i:
                min1, min2, min3 = i, min1, min2

            elif min2 > i:
                min2, min3 = i, min2

            elif min3 > i:
                min3 = i

        return min(max3 - min1, max2 - min2, max1 - min3)
