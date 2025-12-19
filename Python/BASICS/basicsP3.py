"""
Docstring for basicsP3
============================================================
Program Title: BASICS - 03 - Swap Two Numbers
Objective: To swap two numbers using a temporary variable
============================================================
"""

# Input two numbers from user
number1 = int(input("Enter first number: "))
number2 = int(input("Enter second number: "))

# Swapping logic using temporary variable
temp = number1
number1 = number2
number2 = temp

# Output after swapping
print("\nAfter swapping:")
print("First number: ",number1)
print("Second number: ",number2)