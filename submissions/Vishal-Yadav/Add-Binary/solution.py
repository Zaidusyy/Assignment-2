class Solution:
    def addBinary(self, a: str, b: str) -> str:
        num1 = int(a, 2)
        num2 = int(b, 2)

        total = num1 + num2
        return bin(total)[2:]

a = "1011"
b = "1101"

sol = Solution()
print(f"Sum: {sol.addBinary(a, b)}")
