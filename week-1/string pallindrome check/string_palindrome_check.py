# To check wheather a string is palindrome or not.

s = input("Enter a string : ")

if s == s[::-1]:
    print("Palindrome string.")
else:
    print("Not a palindrome string.")


# method - 2 using loops.

s = input("Enter a string : ")
is_palindrome = True

for i in range(len(s)//2):
    if s[i] != s[len(s) - 1 - i]:
        is_palindrome = False
        break

if(is_palindrome == True):
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")


# by using function.


# by simple check.

def is_palindrome(s):
    return s == s[::-1]

s = input("Enter a string : ")



