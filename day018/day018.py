#  Absolute Value.
#  If x<0, then y=x^2+2.x, z=3.x | If x≥0 then y=x, z=x^2+10
#  How many digits the number has



# First Task
m = int(input("Enter a number:"))

if m < 0:
    m *= -1

print(f"The absolute value of given number: {m}")


# Second Task
x = int(input("Enter a number: "))

if x >= 0:
    y = x
    z = x**2+10
else:
    y = x**2 + x*2
    z = x*3

print(x, y, z)


# Third Task

n = int(input("Enter a number between 0-100(0 is not included)"))

if n / 1 >= 1:
    if n / 10 >= 1:
        if n / 100 >= 1:
            k = 3
        else:
            k = 2
    else:
        k = 1

print(f"Your number has {k} digit(s).") 