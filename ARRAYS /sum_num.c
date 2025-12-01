#include<stdio.h>
void main()
{
  int x[50],n,i,sum;
printf("How many integers?");
scanf("%d",&n);
for(i=0;i<n;i++)
{ 
printf("Enter the %dth value:",i+1);
scanf("%d",&x[i]);
}
sum=0;
for(i=0;i<n;i++)
{
sum=sum+x[i];
}
printf("\n Sum of all integers = %d",sum);
getch();
}
