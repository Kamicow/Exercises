using System;

	class Day003
{
	static void Main()
	{
	int x, y;
	Console.Write("Dikdortgenin kisa kenarini giriniz: ");
	x = Convert.ToInt32(Console.ReadLine());
	Console.Write("Dikdortgenin uzun kenarini giriniz: ");
	y = Convert.ToInt32(Console.ReadLine());
	Console.WriteLine("Olculerini girdiginiz dikdortgenin alani: " + (x*y)); 
	}
}
