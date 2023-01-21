public class Day014
{
	public static void main(String[] args) {
		int x, y;
		java.util.Scanner kb = new java.util.Scanner(System.in);
		
		System.out.print("Bir sayı giriniz: ");
		x = kb.nextInt();

		System.out.print("Bir sayı daha giriniz: ");
		y = kb.nextInt();
		
        	if (x % y == 0 || y % x == 0) 
            		System.out.println("Girdiğiniz sayılar birbirlerinin katlarıdır.");
        	else
            		System.out.println("Girdiğiniz sayılar birbirlerinin katları değildir.");
	}
}
