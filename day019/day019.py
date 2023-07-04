
number = float(input("Enter a number :"))
if number < 0:
    number *= -1

# Digit variables
digitInt = 0
digitFloat = 0

# Divider
divider = 1

while True:
    if number / divider <= 1:
        print(f"\nBefore the dot, your number has {digitInt} digit(s)")
        break
    digitInt += 1
    divider *= 10

# print(last)

while True:
    if number % 1 == 0:
        print(f"After the dot, there are {digitFloat} digit(s)\n")
        break
    number *= 10
    digitFloat += 1
