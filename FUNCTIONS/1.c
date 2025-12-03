#include<stdio.h>
int main()
{
    void add();
    add();
    return 0;
}
void add()
{
    int x,y,z;
    printf("Enter any 2 numbers:");
    scanf("%d %d",&x,&y);
    z=x+y;
    printf("%d + %d = %d",x,y,z);
}
