#include <stdio.h>

int main() {
    int x;
    
	printf("Bir sayı giriniz: ");
    scanf("%d", &x);
    
    if (x < 0)
        printf("Girdiğiniz sayı negatiftir.");
    
	else if (x > 0)
        printf("Girdiğiniz sayı pozitiftir.");
    
	else 
        printf("Girdiğiniz sayı nötrdür.");
    
    return 0;
}
