/*
Name: Vincent mutua 
Reg:CT100/G/26230/25
des: Calculating electric bills 
*/

#include <stdio.h>

int first100(int units) {
int bill = units * 10;
return bill;
}

int next100(int units) {
int bill = units * 15;
return bill;
}

int above200(int units) {
int bill = units * 20;
return bill;
}

int calculate_billo(int units) {
int bill = 0;

if (units <= 100) {
bill = first100(units);
}
else if (units <= 200) {
bill = first100(100) + next100(units - 100);
}
else {
bill = first100(100) + next100(100) + above200(units - 200);
}

return bill;
}

int main() {
int units;
printf("Enter number of units consumed: ");
scanf("%d", &units);

if (units < 0) {
printf("Units cannot be negative!\n");
return 1;
}

int total = calculate_billo(units);
printf("Total bill amount: sh%d\n", total);

return 0;
}