x = int(input("Bir sayı giriniz: "))
y = int(input("Bir sayı giriniz: "))  
    
if x % y == 0 or y % x == 0:
    print("Girdiğiniz sayılar birbirlerinin katlarıdır.")
else:
    print("Girdiğiniz sayılar birbirlerinin katları değildir.")
