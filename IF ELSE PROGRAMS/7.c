#include<stdio.h>
void main()
{
    char ch;
    int choice;
    printf("Enter the character:");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    {
        printf("%c is an alphabet",ch);
    }
    else
    {
        printf("%c is not an alphabet",ch);
    }
  getch();
}
