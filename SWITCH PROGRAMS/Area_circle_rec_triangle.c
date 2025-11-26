#include<stdio.h>
void main()
{
    int r,choice,l,b,ar1,base,h;
    float ar,ar2;
    printf("Menu Driven");
    printf("\n1.Area of Circle");
    printf("\n2.Area of Rectangle");
    printf("\n3.Area of Triangle");
    printf("\nEnter Choice(1,2 or 3):");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Enter radius of circle:");
               scanf("%d",&r);
               ar=3.14*r*r;
               printf("Area of circle is %f",ar);
               break;
        case 2:printf("Enter Length and Breadth of Rectancle:");
               scanf("%d %d",&l,&b);
               ar1=l*b;
               printf("Area of rectangle is %d",ar1);
               break;
        case 3:printf("Enter height and base of triangle");
               scanf("%d %d",&h,&base);
               ar2=0.5*base*h;
               printf("Area of triangle is %f",ar2);
               break;
        default:
            printf("Invalid input");
    }
    getch();
}
