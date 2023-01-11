x = input("İstediğiniz bir şeyi giriniz: ")
y = input("Bir şey daha giriniz: ")

temp = x
x = y
y = temp

print(f"Girdiğiniz değerlerin yeri değişti. İlk değer: {x} İkinci değer: {y}")
