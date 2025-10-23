/*
name : Vincent mutua 
reg:CT100/G/26230/25
des: Calculation for fare
*/

#include <stdio.h>

int CalculateFare(int distance)
{
int rate_per_km = 50;
int total_fare = distance * rate_per_km;
return total_fare;
}

int main()
{
int distance, fare;
printf("Enter distance traveled (in kilometers): ");
scanf("%d", &distance);
fare = CalculateFare(distance);
printf("Total Fare= %d\n", fare);
return 0;
}
    