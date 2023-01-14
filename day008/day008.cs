using System;
class Day008 {
  static void Main() {
    int i, x, sum = 0;
    
    Console.Write("Bir sayı giriniz: ");
    x = Convert.ToInt32(Console.ReadLine());
    
    for (i = 0; i < x; i += 1) {
        Console.WriteLine(i);
        sum += i;
    }
    
    Console.WriteLine("Girdiğiniz sayıya kadar olan sayıların toplamı: " + sum);
  }
}
