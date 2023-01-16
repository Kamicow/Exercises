#include <iostream>

using namespace std;

int main()
{
    int x;
    
	  cout<<"Bir sayı giriniz: ";
      cin >> x;
    
    if (x != 0 && x < 0)
      cout << "Girdiğiniz sayı negatiftir.";

    else if (x != 0 && x > 0)
      cout << "Girdiğiniz sayı pozitiftir.";

    else
      cout << "Girdiğiniz sayı nötrdür";
    
    return 0;
}
