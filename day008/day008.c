#include <stdio.h>

int main()
{
    int i, x, sum = 0;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &x);
    
    for (i = 0; i < x; i += 1) {
        printf("%d\n", i);
        sum += i;
    }
    
    printf("Girdiğiniz sayıya kadar olan sayıların toplamı: %d", sum);
    
    return 0;
}
