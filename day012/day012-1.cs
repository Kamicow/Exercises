using System;
class Day012 {
  static void Main() {
    
    int x, i;
    
    Console.Write("Girdiğiniz sayının tek veya çift olduğunu söyleyen programa hoş geldiniz! Lütfen bir sayı giriniz: ");
    x = Convert.ToInt32(Console.ReadLine());
    
    if (x > 0) {
        for (i = x; i > 1; i -= 2){
            
        }
        if (i == 0)
            Console.WriteLine("Girdiğiniz sayı pozitif bir çift sayıdır. ");
        else
            Console.WriteLine("Girdiğiniz sayı pozitif bir tek sayıdır.");
    }
    else if (x < 0) {
        for (i = x; i < -1; i += 2){
            
        }
        if (i == 0)
            Console.WriteLine("Girdiğiniz sayı negatif bir çift sayıdır. ");
        else
            Console.WriteLine("Girdiğiniz sayı negatif bir tek sayıdır. ");
    }
    else
        Console.WriteLine("0 girdiniz. ");
    
  }
}
