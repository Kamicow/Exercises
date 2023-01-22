#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    
    cout << "Bir sayı giriniz: ";
    cin >> x;
    
    if (x < 0){
        y = x*x + 2*x;
        z = 3*x;
    }    
    else {
        y = x;
        z = x*x + 10;
    }
    cout << y << "\t" << z;
    
    return 0;
}
