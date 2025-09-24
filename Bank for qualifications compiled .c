#include<stdio.h>
int main(){

int age;
float income;

printf("enter your age:");
scanf("%d",&age);

printf("enter your income:");
scanf("%f",&income);

if (age>=21 && income>=21000){
printf("congratulations your qualify for a loan ");}
else{
printf("unfortunately,we are unable to offer you a loan at this time");}

    return 0;
}
