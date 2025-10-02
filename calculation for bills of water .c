/*
Name:Vincent mutua 
Reg:CT100/G/26230/25
Des:Calculation for bills
*/


#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 30) {
        bill = units * 20.0;
    } 
    else if (units <= 60) {
        bill = (30 * 20.0) + ((units - 30) * 25.0);
    } 
    else {
        bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    }

    printf("Total Bill = %.2f\n", bill);

    return 0;
    }