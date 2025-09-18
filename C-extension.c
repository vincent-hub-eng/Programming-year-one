//simple program 
/*
name:vincent mutua
reg:CT100/G/26230/25
des:showing my profile 
*/

#include<stdio.h>

int main()
{
char phoneNo[13];
float height ;
double weight ;

printf("enter phoneNo:");
scanf("%s",phoneNo);

printf("enter height:");
scanf("%f",&height);

printf("enter weight:");
scanf("%lf",&weight);

printf("phoneNo:%s\n",phoneNo);
printf("height:%.2f\n",height);
printf("weight:%.2lf\n",weight);

    return 0;
}