#include <stdio.h>
int main() 
{
int number, reverse_Num = 0, remainder, orignal_Num;
printf("Enter an integer: ");
scanf("%d", &number);
orignal_Num= number;
for (; number!= 0; number/=10)
{
remainder = number % 10;
reverse_Num = reverse_Num* 10+remainder;
}
if (orignal_Num == reverse_Num)
printf("%d is a palindrome number\n", orignal_Num);
else
printf("%d is not a palindrome number\n", orignal_Num); 
}