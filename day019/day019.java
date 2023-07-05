public class Day019
{
	public static void main(String[] args){
        java.util.Scanner kb = new java.util.Scanner(System.in);

        float number, divider = 1;
        int  digitInt = 0, digitFloat = 0;

        System.out.print("Enter a number: ");
        number = kb.nextFloat();

        if (number < 0)
            number *= -1;

        while(true) {
            if (number / divider <= 1) {
                System.out.print("Before the dot, there are " + digitInt +  " digit(s)\n");
                break;
            }
            digitInt += 1;
            divider *= 10;
        }

        while(true) {
            if (number % 1 == 0) {
                System.out.print("After the dot, there are " + digitFloat +  " digit(s)\n");
                break;
            }
            number *= 10;
            digitFloat += 1;
        }
    }
}    