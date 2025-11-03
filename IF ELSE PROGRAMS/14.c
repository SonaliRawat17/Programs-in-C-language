#include<stdio.h>
int main()
{
    float age1,age2,age3;
    printf("Enter age of first person:");
    scanf("%f",&age1);
    printf("Enter age of second person:");
    scanf("%f",&age2);
    printf("Enter age of third person:");
    scanf("%f",&age3);
    if (age1==age2 && age2==age3)
    {
        printf("All three person have same age");
        return(0);
    }
    if(age1<=age2 && age1<=age3)
    {
        {
            if (age1==age2)
            {
                printf("Third Person is oldest");
            }
            else if(age1==age3)
            {
                printf("Second Person is oldest");
            }
            else
            {
                printf("Second and Third Person are oldest");
            }
        }
      printf("\nFirst Person is youngest");
    }
    else if (age2<=age1 && age2<=age3)
    {
        {
            if (age2==age3)
            {
                printf("First Person is oldest");
            }
            else if(age1==age3)
            {
                printf("First and Third Person are oldest");
            }
        }
        printf("\nSecond Person is youngest");
    }
    else
    {
        printf("\nThird Person is youngest");
    }
    return(0);
}
