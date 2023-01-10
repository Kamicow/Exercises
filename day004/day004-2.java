public class Day004 {
	public static void main(String[] args) {
		java.util.Scanner kb = new java.util.Scanner(System.in);
		int r, h;
		System.out.println("Silindiri yari capini giriniz:");
		r = kb.nextInt();
		System.out.println("Silindirin yuksekligini giriniz:");
		h = kb.nextInt();
		System.out.println("Silindirin hacmi: " + Math.PI*r*r*h);
	}
}
