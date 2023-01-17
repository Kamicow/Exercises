#include <stdio.h>

int main()
{
    int x;
    printf("Bir sayı giriniz: ");
    scanf("%d", &x);
    
    if (x % 2 == 0)
        printf("Girdiğiniz sayı çifttir");
    else
        printf("Girdiğiniz sayı tektir");
    return 0;
}
