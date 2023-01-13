#include <iostream>

using namespace std;

int main()
{
    int x, sum = 0;
    
    cout<<"Bir sayı giriniz. Bu sayının rakamlarının karesi size söylenecektir. ";
    cin >> x;
    sum += (x % 10) * (x % 10); 
    sum += (x / 10) * (x / 10);
    cout << sum;
    return 0;
}
