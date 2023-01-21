using System;
class Day014 {
  static void Main() {
    int x, y;
    
    Console.Write("Bir sayı giriniz: ");
    x = Convert.ToInt32(Console.ReadLine());

    Console.Write("Bir sayı giriniz: ");
    y = Convert.ToInt32(Console.ReadLine());
    
    if (x % y == 0 || y % x == 0)
        Console.WriteLine("Girdiğiniz sayılar birbirlerinin katlarıdır.");
   
    else
        Console.WriteLine("Girdiğiniz sayılar birbirlerinin katları değildir.");
  }
}
