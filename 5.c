#include<stdio.h>
void main()
{
int i,n,flag=0;
printf("enter n:");
scanf("%d",&n);
for(i=2;i<=n;i++)
{if(n%i==0)
flag++ ;}
if (flag==0)
printf("prime number");
else 
printf("not a prime number");
}