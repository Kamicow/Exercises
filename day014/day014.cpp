#include <iostream>

using namespace std;

int main()
{
    int x, y;
    
    cout<<"Bir sayı giriniz: ";
    cin >> x;

    cout<<"Bir sayı giriniz: ";
    cin >> y;
    
    if (x % y == 0 || y % x == 0)
        printf("Girdiğiniz sayılar birbirlerinin katlarıdır.");
    else
        printf("Girdiğiniz sayılar birbirlerinin katları değildir.");

    return 0;
}
