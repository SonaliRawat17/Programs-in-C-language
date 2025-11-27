#include <stdio.h>
void main()
{
int i, num, sum = 0;
clrscr();
printf("Enter a number to check for perfect number: ");
scanf("%d", &num);
for(i = 1; i <= num / 2; i++)
{if(num%i == 0)
  {sum += i;}
}
if(sum == num && num > 0)
{printf("%d is a perfect number", num);}
else
{printf("%d is not a perfect number", num);}
getch();
}
