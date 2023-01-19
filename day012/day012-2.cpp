#include <iostream>

using namespace std;

int main()
{
    int x, i, temp = 0;
    
    cout << "Girdiğiniz sayının tek veya çift olduğunu söyleyen programa hoş geldiniz! Lütfen bir sayı giriniz: ";
    cin >> x;
    
    for (i = 1; i <= x/2 + 1; i += 1) {
        temp = i * 2;
        
        if (temp >= x){
            
            if (temp > x) {
                cout << "Sayınız tek bir sayıdır.";
                break;
            }
            else {
                cout << "Sayınız çift bir sayıdır.";
                break;
            }
        }   
    }
    return 0;
}
