def is_palindrome(s):
   
    cleaned = ''.join(char.lower() for char in s if char.isalnum())
    return cleaned == cleaned[::-1]

if __name__ == "__main__":
    s = input("Enter a string: ")
    result = is_palindrome(s)
    print("Output:", result)