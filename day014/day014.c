#include <stdio.h>

int main()
{
    int x, y;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &x);

    printf("Bir sayı giriniz: ");
    scanf("%d", &y);
    
    if (x % y == 0 || y % x == 0)
        printf("Girdiğiniz sayılar birbirlerinin katlarıdır.");
    else
        printf("Girdiğiniz sayılar birbirlerinin katları değildir.");
    
    return 0;
}
