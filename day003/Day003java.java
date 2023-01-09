public class Day003java {
	public static void main(String[] args) {
		java.util.Scanner kb = new java.util.Scanner(System.in);
		int x, y;
		System.out.println("Dikdortgenin kisa kenarini giriniz:");
		x = kb.nextInt();
		System.out.println("Dikdortgenin uzun kenarini giriniz:");
		y = kb.nextInt();
		System.out.println("Olculerini girdiginiz dikdortgenin alani:" + x*y); 
	}
}
