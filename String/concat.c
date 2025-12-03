#include<stdio.h>
int main()
{
    char str1[25],str2[25];
    int i=0,j=0;
    printf("Enter a string:");
    gets(str1);
    printf("Enter a string:");
    gets(str2);
    printf("\nString 1: %s",str1);
    printf("\nString 2: %s",str2);
    while(str1[i]!='\0')
    {
        i=i+1;
    }
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("\nConcatenated String: %s",str1);
    return 0;
}
