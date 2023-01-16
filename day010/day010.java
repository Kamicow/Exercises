public class Day010
{
	public static void main(String[] args) {
		java.util.Scanner kb = new java.util.Scanner(System.in);
		int x;
		
		System.out.print("Bir sayı giriniz: ");
		x = kb.nextInt();
		
		if (x != 0 && x < 0)
		    System.out.println("Girdiğiniz sayı negatiftir.");
		    
		else if (x != 0 && x > 0)
		    System.out.println("Girdiğiniz sayı pozitiftir.");
		
		else 
		    System.out.println("Girdiğiniz sayı nötrdür.");
		
	}
}
