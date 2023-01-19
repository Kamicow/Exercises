#include <stdio.h>

int main()
{
    int x, i;
    
    x = 4;
    
    if (x > 0) {
        for (i = x; i > 1; i -= 2){
            
        }
        if (i == 0)
            printf("Girdiğiniz sayı pozitif bir çift sayıdır. ");
        else
            printf("Girdiğiniz sayı pozitif bir tek sayıdır.");
    }
    else if (x < 0) {
        for (i = x; i < -1; i += 2){
            
        }
        if (i == 0)
            printf("Girdiğiniz sayı negatif bir çift sayıdır. ");
        else
            printf("Girdiğiniz sayı negatif bir tek sayıdır. ");
    }
    else
        printf("0 girdiniz. ");

    return 0;
}
