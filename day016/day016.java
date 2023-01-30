public class Day016
{
	public static void main(String[] args) {
	java.util.Scanner kb = new java.util.Scanner(System.in);
	int x, i, temp = 0;
        
        System.out.print("Girdiğiniz sayının çarpanları gösterilecektir: ");
        x = kb.nextInt();
    
        for (i = 1; i < x + 1; i++) {
            if (x % i == 0) {
                temp = i;
                if (x / i < temp)
                break;
                System.out.print(i + " ");
                System.out.println(x/i);
        	}
        }
    }
}
