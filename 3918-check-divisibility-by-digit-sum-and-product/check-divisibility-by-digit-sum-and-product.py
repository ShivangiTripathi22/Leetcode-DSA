class Solution:
    def checkDivisibility(self, n: int) -> bool:
        digit_sum = 0
        digit_product = 1
        total_sum = 0
        temp = n

        while n > 0:
            rem = n % 10
            digit_sum = digit_sum + rem
            digit_product = digit_product * rem
            n = n // 10

        total_sum = digit_sum + digit_product

        return temp % total_sum == 0
