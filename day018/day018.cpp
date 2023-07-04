#include <iostream>

using namespace std;

int main() {

    // First Task
    int m;

    cout << "Enter a number: ";
    cin >> m;
    if (m < 0)
        m *= -1;
    
    cout << "The absolute value of given number is:" << m;


    //Second Task
    int x, y, z;
    cout << "\nEnter a number: ";
    cin >> x;
    if (x >= 0) {
        y = x;
        z = x*x + 10;
    }
    else {
        y = x*x + x*2;
        z = x*3;
    }
    
    cout << x << " " << y << " " << z;


    // Third Task
    int n, k = 0;

    cout << "\nEnter a number: ";
    cin >> n;

    if (n / 1 >= 1)
        if (n / 10 >= 1)
            if (n / 100 >= 1)
                k = 3;
            else
                k = 2;
        else
            k = 1;
    
    cout << "The digit number of your number is: " << k;

    return 0;
}