using System;
class Day013 {
  static void Main() {
    int x, y;
    
    Console.Write("Bir sayı giriniz: ");
    x = Convert.ToInt32(Console.ReadLine());
    
    Console.Write("Başka bir sayı giriniz: ");
    y = Convert.ToInt32(Console.ReadLine());
    
    if (x < y)
        Console.Write(y + " büyüktür " + x); 
    else if (x > y)
        Console.Write(x + " büyüktür " + y);        
    else
        Console.Write("Girdiğiniz sayılar eşittir. ");
  }
}
