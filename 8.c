#include <stdio.h>
void main()
{
int a,b,c,d,i;
printf("enter a value");
scanf("%d",&a);
printf("enter b value");
scanf("%d",&b);
printf("enter c and d values");
scanf("%d%d",&c,&d);
for(i=c;i<=d;i++)
 {if(i%a==0&&i%b==0)
 printf("%d\n",i);
 }
}