#include<stdio.h>
#include<math.h>


int main(){
 float PI=3.142;   
double radius,height,volume,surface_area;

//prompt user for input 
printf("Enter the radius of the cylinder:");
scanf("%lf",&radius);

printf("Enter the height of the cylinder:");
scanf("%lf",&height);

//calculation 
volume= PI*pow(radius, 2)*height;
surface_area=2*PI*radius*height+2*PI*pow(radius, 2);

//output results 
printf("volume of the cylinder = %.2lf\n",volume);
printf("surface_area of the cylinder = %.2lf\n",surface_area);
    return 0;
}