class Solution:
    def reverseDegree(self, s: str) -> int:
        sum=0
        for i in range(len(s)):
            idx=ord('z')-ord(s[i])+1
            sum=sum+(idx*(i+1))

        return sum