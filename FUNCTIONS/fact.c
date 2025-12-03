#include<stdio.h>
int main()
{
    void fact();
    fact();
    return 0;
}
void fact()
  {
    int i,k,p=1;
    printf("Enter a number:");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        p=p*i;
    }
    printf("Factorial of %d is %d",k,p);
}
