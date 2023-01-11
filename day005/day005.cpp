#include <iostream>

using namespace std;
	int main() {
    	int x, y, temp;
    	cout << "Bir sayı giriniz: X ";
    	cin >> x;
    	cout << "Başka bir sayı daha giriniz: Y ";
    	cin >> y;
    	temp = x;
    	x = y;
    	y = temp;
    	cout << "x: " << x << " y: " << y;
}
