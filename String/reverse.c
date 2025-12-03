#include<stdio.h>
int main()
{
    char str[25];
    int i,count=0;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    for(i=0;str[i]!='\0';i++)
    {
        count=count+1;
    }
    printf("\nReverse of string\n");
    for(i=count-1;i>=0;i--)
    {
     printf("%c",str[i]);
    }
    return 0;
}
