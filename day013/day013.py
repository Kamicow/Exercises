x = int(input("Bir sayı giriniz: "))

y = int(input("Başka bir sayı giriniz: "))

if x < y:
    print(f"{y}(y) büyüktür {x}(x)")
elif x > y:
    print(f"{x}(x) büyüktür {y}(y)")
else:
    print("Girdiğiniz sayılar eşittir.")
