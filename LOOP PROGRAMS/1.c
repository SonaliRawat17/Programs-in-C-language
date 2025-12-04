#include<stdio.h>
void main()
{
    int num,i=1,k=1;
    printf("Enter a positive number:");
    scanf("%d",&num);
    while(i<=num);
    {
        k=k*i;
        i++;
    }
    printf("Factorial of %d is %d",num,k);
    getch();
}
