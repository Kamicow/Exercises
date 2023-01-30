#include <iostream>

using namespace std;

int main()
{
    int x, i, temp = 0;
    
    cout << "Girdiğiniz sayının çarpanları gösterilecektir: ";
    cin >> x;
    
    for (i = 1; i < x + 1; i++) {
        if (x % i == 0) {
            temp = i;
            if (x / i < temp)
            break;
            cout << i << " " << x / i << "\n";
        }
    }
    return 0;
}
