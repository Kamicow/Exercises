using System;
class Day015 {
  static void Main() {
    int x, y, z;
    
    Console.Write("Bir sayı giriniz: ");
    x = Convert.ToInt32(Console.ReadLine());
    
    if (x < 0){
        y = x*x + 2*x;
        z = 3*x;
    }    
    else {
        y = x;
        z = x*x + 10;
    }
    
    Console.Write(y + " " + z);
  }
}
