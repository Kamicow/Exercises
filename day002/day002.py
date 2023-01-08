while True:
    try:
        x = int(input("Bir sayı giriniz: "))
        y = int(input("Bir sayı daha giriniz: "))
        print("İşlem başarılı, girdiğiniz sayıların toplamı:", x+y)
        break

    except Exception:
        print("Lütfen tam sayı değeri giriniz!")
        continue
