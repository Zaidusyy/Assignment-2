class Solution:
    def reverse(self, x: int) -> int:
        MIN_INT, MAX_INT = -2**31, 2**31 - 1

        sign = -1 if x < 0 else 1
        x = abs(x)

        reversed_num = sign * int(str(x)[::-1])

        if reversed_num < MIN_INT or reversed_num > MAX_INT:
            return 0
        return reversed_num

