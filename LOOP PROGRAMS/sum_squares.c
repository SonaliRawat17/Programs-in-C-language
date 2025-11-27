#include <stdio.h>
void main()
{
int num,i,sum;
printf("Enter a positive number:");
scanf("%d",&num);
sum=0;
if(num>0)
{for(i=1;i<=num;i++)
{printf("%d^2=%d \n",i ,i*i);
sum=sum+(i*i);
}
printf("Sum of squares of first %d natural numbers= %d" ,num,sum); }
else
printf("Please enter positive natural number(starting from 1)");
getch();
}
