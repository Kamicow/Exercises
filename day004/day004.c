#include <stdio.h>

int main() {
	int r, h; 
	double pi;
	pi = 3.14;
	printf("Silindirin capini giriniz");
	scanf("%d", &r);
	printf("Silindirin yuksekligi giriniz");
	scanf("%d", &h);
	printf("Olculerini girdiginiz silindirin hacmi: %f", (r*r*pi*h));
	
}
