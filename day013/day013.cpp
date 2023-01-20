#include <iostream>

using namespace std;

int main()
{
    int x, y;
    
    cout << "Bir sayı giriniz: ";
    cin >> x;
    
    cout << "Başka bir sayı giriniz: ";
    cin >> y;
    
    if (x < y)
        cout << y << " büyüktür " << x;    
    else if (x > y)
        cout << x << " büyüktür " << y;       
    else
        cout << "Girdiğiniz sayılar eşittir.";

    return 0;
}
