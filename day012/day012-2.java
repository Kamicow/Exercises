public class Day012
{
	public static void main(String[] args) {
		java.util.Scanner kb = new java.util.Scanner(System.in);
		int x, i, temp = 0;
		
		System.out.print("Girdiğiniz sayının tek veya çift olduğunu söyleyen programa hoş geldiniz! Lütfen bir sayı giriniz: ");
		x = kb.nextInt();
		
		for (i = 1; i <= x/2 + 1; i += 1) {
        temp = i * 2;
        
        if (temp >= x){
            
            if (temp > x) {
                System.out.println("Sayınız tek bir sayıdır.");
                break;
            }
            else {
                System.out.println("Sayınız çift bir sayıdır.");
                break;
            }
        }
    }
	}
}
