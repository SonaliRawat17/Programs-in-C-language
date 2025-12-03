#include<stdio.h>
int main()
{
    char str[25];
    int i,count=0,x;
    printf("Enter a string:");
    gets(str);
    printf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        count=count+1;
    }
    if(str[0]==str[count-1])
        x=1;
        i++;
    {
        if(x==1)
        {printf("\nIts a Palindrome!!\n");}
        else
        {printf("\nNot a Palindrome!!\n");}
    }
    return 0;
}
