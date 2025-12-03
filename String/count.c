#include<stdio.h>
int main()
{
    char str[25],ch;
    int i,v=0,c=0,count=0;
    printf("Enter a string:");
    gets(str);
    printf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {   ch=str[i];
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
           v=v+1;
        }
        else
        {
            c=c+1;
        }
    }
    }
    printf("\nTotal Vowels %d",v);
    printf("\nTotal Consonants %d",c);
    printf("\nTotal Alphabets %d",v+c);
    return 0;
}
