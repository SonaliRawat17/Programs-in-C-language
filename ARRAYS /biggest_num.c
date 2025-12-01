#include<stdio.h>
void main()
{
  int x[50],n,i,big;
printf("How many numbers?");
scanf("%d",&n);
printf("Enter all those numbers :");
for(i=0;i<n;i++)
{
  scanf("%d",&x[i]);
}
big=x[0];
for(i=1;i<n;i++)
{ 
   if(x[i]>big)
{   
   big = x[i];
} }
printf("\n %d is biggest number",big);
getch();
}
