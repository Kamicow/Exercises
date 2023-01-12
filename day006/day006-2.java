public class Main {
	
	public static void main(String[] args) {
		java.util.Scanner kb = new java.util.Scanner(System.in);
		float x, y;
		System.out.print("Bir sayı giriniz: X ");
		x = kb.nextFloat();
		System.out.print("Başka bir sayı daha giriniz: Y ");
		y = kb.nextFloat();
		System.out.println(x+y);
		System.out.println(x-y);
		System.out.println(x*y);
		System.out.println(x/y);
	}
}
