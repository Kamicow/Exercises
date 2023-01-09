#include <stdio.h>

int main() {
	int x, y;
	printf("Dikdortgenin uzun kenarini giriniz: ");
	scanf("%d", &x);
	printf("Dikdortgenin kisa kenarini giriniz: ");
	scanf("%d", &y);
	printf("Olculerini girdiginiz dikdortgenin alani: %d", (x*y));
	return 0;
}
