#include <stdio.h>
void main()
{
float f,c;
printf("enter temperature in Fahrenheit:");
scanf("%f",&f);
c=(f-32)*(5.0/9.0);
printf("the temperature scale in celsius is %f",c);
printf("enter the temperature scale in celsius:");
scanf("%f",&c);
f=(c*(9.0/5.0))+32;
printf("the temperature scale in Fahrenheit is %f",f);
}