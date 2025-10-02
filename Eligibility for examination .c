/*
Name:vincent mutua 
Reg:CT100/G/26230/25
Des:Determining wether a student is eligible for final exam 
*/
#include<stdio.h>

int main(){

int marks;
float attendance;

printf("Enter your marks");
scanf("%d",&marks);
printf("Enter your attendance");
scanf("%f",&attendance);

if(marks>=40 && attendance>=75){
printf("you are elegible for the examination\n");}
else{
printf("you are not eligible for the examination\n");}

    return 0;
}