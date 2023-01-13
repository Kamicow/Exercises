public class Day007 {
    public static void main (String[] args) 
    {
        java.util.Scanner kb = new java.util.Scanner(System.in);
        int x, sum = 0;
        
        
        System.out.print("Bir sayı giriniz: ");
        x = kb.nextInt();
        
        sum += (x % 10) * (x % 10); 
        sum += (x / 10) * (x / 10);
        
        System.out.print(sum);
    }
}
