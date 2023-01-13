import time

print("Girdiğiniz sayının rakamlarının karesi toplayan programa hoş geldiniz. ")
time.sleep(2)

sum = 0
x = int(input("Bir sayı giriniz: "))

sum += (x % 10) ** 2 
sum += int((x / 10)) ** 2

print(f"Girdiğiniz sayının rakamlarının toplamı {sum}")
