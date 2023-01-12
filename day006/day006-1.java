public class Day006 {
	
	public static void main(String[] args) {
		java.util.Scanner kb = new java.util.Scanner(System.in);
		
		int x, y;
		System.out.print("Bir sayı giriniz: X ");
		x = kb.nextInt();
		
		System.out.print("Başka bir sayı daha giriniz: Y ");
		y = kb.nextInt();
		
		System.out.println(x+y);
		System.out.println(x-y);
		System.out.println(x*y);
		System.out.println(x/y);
	}
}

