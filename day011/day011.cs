
public class Day011
{
	public static void main(String[] args) {
		int x;
		java.util.Scanner kb = new java.util.Scanner(System.in);
		
		System.out.print("Bir sayı giriniz: ");
		x = kb.nextInt();
		
        	if (x % 2 == 0)
            		System.out.println("Girdiğiniz sayı çifttir");
        	else
            		System.out.println("Girdiğiniz sayı tektir");
	}
}
