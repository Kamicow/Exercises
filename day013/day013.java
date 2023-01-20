public class Day013
{
	public static void main(String[] args) {
	    java.util.Scanner kb = new java.util.Scanner(System.in);
	    int x, y;
		
      System.out.print("Bir sayı giriniz: ");
      x = kb.nextInt();
      
      System.out.print("Başka bir sayı daha giriniz: ");
      y = kb.nextInt();

      if (x < y)
          System.out.print(y + "(y) büyüktür " + x + "(x)");        
      else if (x > y)
          System.out.print(x + "(x) büyüktür " + y + "(y)");            
      else
          System.out.print("Girdiğiniz sayılar eşittir. ");
	}
}
