#include <stdio.h>

int main() {
	int x, y;
	
	printf("Bir sayı giriniz ");
	scanf("%d", &x);
	
	printf("Bir sayı giriniz ");
	scanf("%d", &y);
	
	printf("%d \n", (x+y));
	printf("%d \n", (x-y));
	printf("%d \n", (x*y));
	printf("%d \n", (x/y));
	
	return 0;
}
