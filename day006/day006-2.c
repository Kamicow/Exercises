#include <stdio.h>

int main() {
	float x, y;
	
	printf("Bir sayı giriniz ");
	scanf("%f", &x);
	
	printf("Bir sayı giriniz ");
	scanf("%f", &y);
	
	printf("%f \n", (x+y));
	printf("%f \n", (x-y));
	printf("%f \n", (x*y));
	printf("%f \n", (x/y));
	
	return 0;
}
