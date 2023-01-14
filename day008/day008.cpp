#include <iostream>

using namespace std;

int main()
{
    int i, x, sum = 0;
    
    cout<<"Bir sayı giriniz: ";
    cin >> x;
    
    for (i = 0; i < x; i += 1) {
        cout << i << "\n";
        sum += i;
    }
    
    cout << "Girdiğiniz sayıya kadar olan tüm doğal sayıların toplamı: " << sum;
    
    return 0;
}
