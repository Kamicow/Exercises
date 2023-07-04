#include <stdio.h>

int main() {

    // First Task
    int m;

    printf("Enter a number: ");
    scanf("%d", &m);
    if (m < 0)
        m *= -1;
    
    printf("The absolute value of given number is: %d \n", m);


    //Second Task
    int x, y, z;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x >= 0) {
        y = x;
        z = x*x + 10;
    }
    else {
        y = x*x + x*2;
        z = x*3;
    }
    
    printf("x : %d, y : %d, z : %d \n", x, y, z);


    // Third Task
    int n, k = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n / 1 >= 1)
        if (n / 10 >= 1)
            if (n / 100 >= 1)
                k = 3;
            else
                k = 2;
        else
            k = 1;
    
    printf("The digit number of your number is %d", k);

    return 0;
}