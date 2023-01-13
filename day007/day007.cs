using System;
  class Day007 {
    static void Main() {
      int x, sum = 0;
      
      Console.Write("Bir sayı giriniz: ");
      x = Convert.ToInt32(Console.ReadLine());
      
      sum += (x % 10) * (x % 10); 
      sum += (x / 10) * (x / 10);
      
      Console.WriteLine(sum);
    }
  }
