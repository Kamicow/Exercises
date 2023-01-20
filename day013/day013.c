#include <stdio.h>

int main()
{
    int x, y;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &x);
    printf("Başka bir sayı giriniz: ");
    scanf("%d", &y);
    
    if (x < y)
        printf("%d büyüktür %d", y, x);
    
    else if (x > y)
        printf("%d büyüktür %d", x, y);
        
    else
        printf("Girdiğiniz sayılar eşittir.");

    return 0;
}
