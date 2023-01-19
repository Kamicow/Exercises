public class Day012
{
	public static void main(String[] args) {
		java.util.Scanner kb = new java.util.Scanner(System.in);
		int x, i, temp = 0;
		
		System.out.print("Girdiğiniz sayının tek veya çift olduğunu söyleyen programa hoş geldiniz! Lütfen bir sayı giriniz: ");
		x = kb.nextInt();
		
		if (x > 0) {
            for (i = x; i > 1; i -= 2){
                
            }
                if (i == 0)
                    System.out.print("Girdiğiniz sayı pozitif bir çift sayıdır. ");
                else
                    System.out.print("Girdiğiniz sayı pozitif bir tek sayıdır.");
        }
        else if (x < 0) {
            for (i = x; i < -1; i += 2){
                
            }
                if (i == 0)
                    System.out.print("Girdiğiniz sayı negatif bir çift sayıdır. ");
                else
                    System.out.print("Girdiğiniz sayı negatif bir tek sayıdır. ");
        }
        else
            System.out.print("0 girdiniz. ");
	}
}
