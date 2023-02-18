import time

x = int(input("Girdiğiniz sayının asal çarpanları bulunacaktır: "))
carpanlar = []
asalcarpan = []

for i in range(1, int(x + 1)):
    if x % i == 0:
        temp = i
        if x / i < temp:
            break
        carpanlar.append(i)
        carpanlar.append(x/i)

carpanlar.sort()        
length = len(carpanlar)

for i in range(length):
    asalbulma = 0
    for j in range(lenght):
        if carpanlar[i] % carpanlar[j] == 0:
            # Eğer sayı çarpanlardan birine tam bölünüyorsa o sayının çarpanı 1 artar.
            asalbulma += 1
    if asalbulma == 2:
        # Asal sayıların iki tane çarpanı olduğu için eğer çarpan 2 ise o sayı asaldır.
        asalcarpan.append(int(carpanlar[i]))

print("\nGirdiğiniz sayının asal carpanları:")        
print(asalcarpan)

time.sleep(5)
