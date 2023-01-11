using System;

	class Day005 {
		static void Main() {
			int x, y, temp;
			Console.Write("Bir sayı giriniz: X ");
			x = Convert.ToInt32(Console.ReadLine());
			Console.Write("Başka bir sayı daha giriniz: Y ");
			y = Convert.ToInt32(Console.ReadLine());
			temp = x;
			x = y;
			y = temp;
			Console.Write("x:" + x + " y: " + y); 
		}
}
