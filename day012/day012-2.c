#include <stdio.h>

int main()
{
    
    int x = 6, i, temp = 0;
    
    for (i = 1; i <= x; i++) {
        temp = i*2;
        if (temp >= x ) {
            if (temp > x) {
                printf("Sayınız tek bir sayıdır. ");
                break;
            }
            else {
                printf("Sayınız çift bir sayıdır.");
                break;
            }
        }
        else
            continue;
    }
    return 0;
}
