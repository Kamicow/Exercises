using System;

	class Day002
{
	static void Main()
	{
	int x, y;
	Console.Write("Bir sayi giriniz: ");
	x = Convert.ToInt32(Console.ReadLine());
	Console.Write("Bir sayi daha giriniz: ");
	y = Convert.ToInt32(Console.ReadLine());
	Console.WriteLine("Girdiginiz sayilarin toplami: " + (x+y)); 
	}
}
