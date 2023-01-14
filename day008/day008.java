public class Day008
{
	public static void main(String[] args) {
	  java.util.Scanner kb = new java.util.Scanner(System.in);
	  int i, x, sum = 0;
		
    System.out.println("Bir sayı giriniz");
		x = kb.nextInt();
		
    for (i = 0; i < x; i += 1) {
		    System.out.println(i);
		    sum += i;
		}
		
    System.out.println(sum);
	}
}
