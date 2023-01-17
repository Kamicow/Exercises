#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Bir sayı giriniz: ";
    cin >> x;
    
    if (x % 2 == 0)
        printf("Girdiğiniz sayı çifttir");
    else
        printf("Girdiğiniz sayı tektir");

    return 0;
}
