class Solution:
    def countCommas(self, n: int) -> int:
        num=1000
        comma=0

        while n>=num:
            comma+=(n-num)+1
            num*=1000
        return comma
        