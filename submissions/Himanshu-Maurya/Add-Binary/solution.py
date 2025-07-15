class Solution:
    def addBinary(self, a: str, b: str) -> str:
        result = []
        i, j = len(a) - 1, len(b) - 1
        carry = 0

        while i >= 0 or j >= 0 or carry:
            bit1 = int(a[i]) if i >= 0 else 0
            bit2 = int(b[j]) if j >= 0 else 0

            total = bit1 + bit2 + carry
            carry = total // 2
            result.append(str(total % 2))

            i -= 1
            j -= 1

        return ''.join(reversed(result))

