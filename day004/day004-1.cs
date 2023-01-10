using System;

	class Day004 {
		static void Main() {
			float r, pi;
			pi = 3.14;
			Console.Write("Dairenin capini giriniz:");
			r = Convert.ToInt32(Console.ReadLine());
			Console.Write("Girdiginiz dairenin alani:" + r*r*pi); 
		}
}
