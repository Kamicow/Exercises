public class Day002 {
	public static void main(String[] args) {
		java.util.Scanner kb = new java.util.Scanner(System.in);
		int x, y;
		System.out.println("Bir sayı giriniz: ");
		x = kb.nextInt();
		System.out.println("Bir sayı daha giriniz: ");
		y = kb.nextInt();
		System.out.println("Girdiğiniz sayıların toplamı: " + (x+y)); 
	}
}
