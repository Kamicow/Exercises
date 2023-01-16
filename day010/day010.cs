using System;

class Day010 {
  static void Main() {
    int x;
    
    Console.Write("Bir sayı giriniz: ");
    x = Convert.ToInt32(Console.ReadLine());
    
    if (x < 0)
        Console.WriteLine("Girdiğiniz sayı negatiftir.");
    
	  else if (x > 0)
        Console.WriteLine("Girdiğiniz sayı pozitiftir.");
    
	  else
        Console.WriteLine("Girdiğiniz sayı nötrdür.");
  }
}
