#include <stdio.h>

int main() {
    int x, y, z;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &x);
    
    if (x < 0){
        y = x*x + 2*x;
        z = 3*x;
    }    
    else {
        y = x;
        z = x*x + 10;
    }
    printf("%d, %d", y, z);
    
    return 0;
}
