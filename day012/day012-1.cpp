#include <iostream>

using namespace std;

int main()
{
    int x, i;
    
    cout << "Girdiğiniz sayının tek veya çift olduğunu söyleyen programa hoş geldiniz! Lütfen bir sayı giriniz: ";
    cin >> x;
    
    
    if (x > 0) {
        for (i = x; i > 1; i -= 2){
            
        }
        if (i == 0)
            cout << "Girdiğiniz sayı pozitif bir çift sayıdır. ";
        else
            cout << "Girdiğiniz sayı pozitif bir tek sayıdır.";
    }
    else if (x < 0) {
        for (i = x; i < -1; i += 2){
            
        }
        if (i == 0)
            cout << "Girdiğiniz sayı negatif bir çift sayıdır. ";
        else
            cout << "Girdiğiniz sayı negatif bir tek sayıdır. ";
    }
    else
        cout << "0 girdiniz. ";

    return 0;
}
