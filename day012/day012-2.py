x = int(input("Bir sayı giriniz: "))
temp = 0


for i in range(x):
    temp = i * 2
    print(temp)
    if temp >= x:
        if temp == x:
            print("Sayınız çift bir sayıdır.")
            break
        else:
            print("Sayınız tek bir sayıdır.")
            break
