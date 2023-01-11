#include <stdio.h>

int main() {
	int x, y, temp; 
	printf("Bir sayı giriniz: ");
	scanf("%d", &x);
	printf("Başka bir sayı daha giriniz: ");
	scanf("%d", &y);
	temp = x;
	x = y;
	y = temp;
	printf("%d sayısı x, %d sayısı y", x, y);
}
