class Solution(object):
    def isPalindrome(self, n):
        """
        :type n: int
        :rtype: bool
        """
        # Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
        if n < 0 or (n % 10 == 0 and n != 0):
            return False

        rev_half = 0
        while n > rev_half:
            rev_half = rev_half * 10 + n % 10
            n = n // 10

        # For even length numbers: n == rev_half
        # For odd length numbers: n == rev_half // 10
        return n == rev_half or n == rev_half // 10

