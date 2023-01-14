public class Main
{
	public static void main(String[] args) {
		java.util.Scanner kb = new java.util.Scanner(System.in);
		int i, x, sum = 0;
		
		System.out.print("Bir sayı giriniz: ");
		x = kb.nextInt();

	    	for (i = 0; i < x; i += 1) {
			    System.out.println(i);
			    sum += i;
		}

	    	System.out.println("Girdiginiz sayıya kadar olan sayıların toplamı: " + sum);
	}
}
