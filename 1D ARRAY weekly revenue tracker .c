/*
name : Vincent mutua 
reg :ct100/g/26230/25
des:1D ARRAY weekly revenue tracker 
*/
#include<stdio.h>

int main()
{
int i,sum,average_revenue;
int revenue [7]={20000,7700,2320,20600,10000,5000,16500};

for (i=0;i<7;i++){
printf("%d\n",revenue[i]);
sum=sum+revenue[i];
average_revenue=sum/7;
}
printf("sum is :%d\n",sum);
printf("average revenue:%d\n",average_revenue);
    return 0;
}