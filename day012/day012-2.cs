using System;
class Day012 {
  static void Main() {
    
    int x, i, temp = 0;
    
    Console.Write("Girdiğiniz sayının tek veya çift olduğunu söyleyen programa hoş geldiniz! Lütfen bir sayı giriniz: ");
    x = Convert.ToInt32(Console.ReadLine());
    
    for (i = 1; i <= x/2 + 1; i += 1) {
        temp = i * 2;
        
        if (temp >= x){
            
            if (temp > x) {
                Console.WriteLine("Sayınız tek bir sayıdır.");
                break;
            }
            else {
                Console.WriteLine("Sayınız çift bir sayıdır.");
                break;
            }
        }
    }
  }
}
