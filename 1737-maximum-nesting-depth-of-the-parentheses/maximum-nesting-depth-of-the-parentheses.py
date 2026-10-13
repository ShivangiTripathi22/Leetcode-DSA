class Solution:
    def maxDepth(self, s: str) -> int:
        total = 0
        count = 0
        for i in s:
            if i in "(":
                count += 1
                if count > total:
                    total = count
            elif i == ")":
                    count -= 1

        return total
