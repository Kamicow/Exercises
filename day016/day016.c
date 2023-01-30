#include <stdio.h>

int main()
{
    int x, i, temp = 0;
    
    printf("Girdiğiniz sayının çarpanları gösterilecektir: ");
    scanf("%d", &x);
    
    for (i = 1; i < x + 1; i++) {
        if (x % i == 0) {
            temp = i;
            if (x / i < temp)
            break;
            printf("%d %d \n", i, x/i);
        }
    }

    return 0;
}
