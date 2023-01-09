while True:
    try:
        x = int(input("Kısa kenar giriniz "))
        y = int(input("Uzun kenar giriniz: "))
        print("İşlem başarılı, girdiğiniz dikdörtgenin alanı:", x*y)
        break

    except Exception:
        print("Lütfen tam sayı değeri giriniz!")
        continue
