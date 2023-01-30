x = int(input("Girdiğiniz sayının çarpanları bulunacaktır: "))

for i in range(1, int(x + 1)):
    if x % i == 0:
        temp = i
        if x / i < temp:
            break
        print(i, x / i)
    
