using System;
class Day016 {
  static void Main() {
    int x, i, temp = 0;
    
    Console.Write("Girdiğiniz sayının çarpanları gösterilecektir: ");
    x = Convert.ToInt32(Console.ReadLine());
     
    for (i = 1; i < x + 1; i++) {
        if (x % i == 0) {
            temp = i;
            if (x / i < temp)
            break;
            Console.WriteLine(i + " " + x/i);
        }
    }
  }
}
