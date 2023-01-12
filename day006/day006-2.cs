using System;

	class Day006 {
		static void Main() {
			float x, y;
			Console.Write("Bir sayı giriniz: X ");
			x = float.Parse(Console.ReadLine());
			Console.Write("Başka bir sayı daha giriniz: Y ");
			y = float.Parse(Console.ReadLine());
			Console.WriteLine(x + y); 
			Console.WriteLine(x - y);
			Console.WriteLine(x * y);
			Console.WriteLine(x / y);   
		}
}
