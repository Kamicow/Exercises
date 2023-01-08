#include <stdio.h>

int main() {
	int x, y;
	printf("Bir sayi giriniz: ");
	scanf("%d", &x);
	printf("Bir sayi daha giriniz: ");
	scanf("%d", &y);
	printf("Girdiginiz sayilarin toplami: %d", (x+y));
	return 0;
}
