public class day018
{
	public static void main(String[] args){
        java.util.Scanner kb = new java.util.Scanner(System.in);

        
        // First Task
        int m;

        System.out.print("Enter a number: ");
        m = kb.nextInt();
        if (m < 0)
            m *= -1;
        
        System.out.print("The absolute value of given number is: " + m);


        //Second Task
        int x, y, z;
        System.out.print("Enter a number: ");
        x = kb.nextInt();
        if (x >= 0) {
            y = x;
            z = x*x + 10;
        }
        else {
            y = x*x + x*2;
            z = x*3;
        }
        
        System.out.print(x + " " + y + " " + z);


        // Third Task
        int n, k = 0;

        System.out.print("Enter a number: ");
        n = kb.nextInt();

        if (n / 1 >= 1)
            if (n / 10 >= 1)
                if (n / 100 >= 1)
                    k = 3;
                else
                    k = 2;
            else
                k = 1;
        
        System.out.print("The digit number of your number is " + k);
    }
}    