public class Main
{
	public static void main(String[] args) {
	java.util.Scanner kb = new java.util.Scanner(System.in);
	int x, i, j, temp1 = 0, temp2 = 0, boyut = 0, asalbulma;
    int carpanlar[] = new int[30], asal[] = new int[30];
    
    System.out.print("Girdiğiniz sayının asal çarpanları gösterilecektir: ");
    x = kb.nextInt();
    
    for (i = 1; i < x + 1; i++) {
        if (x % i == 0) {
            temp1 = i;
            if (x / i < temp1)
                break;
            // temp2 değişkeni carpanlar dizesinin atanmasını sağlıyor.
            carpanlar[temp2] = i;
            temp2 += 1;
            boyut += 1;
            if (x/i != temp1) {
                carpanlar[temp2] = x / i;
                temp2 += 1;
                boyut += 1;
            }
        }
    }
       
    temp1 = 0;
    
    for (i = 0; i < boyut; i++) {
        asalbulma = 0;
        for (j = 0; j < boyut; j++) {
            if (carpanlar[i] % carpanlar[j] == 0) {
                // Eğer sayı çarpanlardan birine tam bölünüyorsa o sayının çarpanı 1 artar.
				asalbulma += 1;
            }
        }
        if (asalbulma == 2) {
            // Asal sayıların iki tane çarpanı olduğu için eğer çarpan 2 ise o sayı asaldır.
			asal[temp1] = carpanlar[i];
            temp1 += 1;
        }
    }
    for (i = 0; i < boyut / 2; i++) 
        //Girilen hiçbir sayının asal çarpanları, sayının kendi çarpanlarının yarısından büyük olamaz. "boyut/2" komutu ile sistem efektif kullanılmış oluyor.
        System.out.print(asal[i] + " ");
	}
}
