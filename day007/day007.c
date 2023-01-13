#include <stdio.h>

int main()
{
    int x, sum;
    sum = 0;
    printf("Girdiğiniz sayıların rakamlarının karelerinin toplamı size söylenecek. \nBir sayı giriniz");
    scanf("%d", &x);
    sum += (x % 10) * (x % 10); 
    sum += (x / 10) * (x / 10); 
    printf("%d", sum);
    return 0;
}
