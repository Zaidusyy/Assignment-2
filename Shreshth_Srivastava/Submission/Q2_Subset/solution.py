def subsets(nums):
    result = []

    def backtrack(start, path):
        result.append(path[:])  
        for i in range(start, len(nums)):
            path.append(nums[i])        
            backtrack(i + 1, path)      
            path.pop()                  
    backtrack(0, [])
    return result


if __name__ == "__main__":
    nums = list(map(int, input("Enter numbers separated by space: ").split()))
    output = subsets(nums)
    print("Output:")
    print(output)
