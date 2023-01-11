public class Day005 {
	
	public static void main(String[] args) {
		java.util.Scanner kb = new java.util.Scanner(System.in);
		int x, y, temp;
		System.out.print("Bir sayı giriniz: X ");
		x = kb.nextInt();
		System.out.print("Başka bir sayı daha giriniz: Y ");
		y = kb.nextInt();
		temp = x;
		x = y;
		y = temp;
		System.out.println("x: " + x + " y: " + y);
	}
}
