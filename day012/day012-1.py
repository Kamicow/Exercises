x = int(input("Bir sayı giriniz: "))

for i in range(x, -1, -2):
    print(i)
if i == 0:
    print("Girdiğiniz sayı çift bir sayıdır.")
    
else:
    print("Girdiğiniz sayı tek bir sayıdır.")
