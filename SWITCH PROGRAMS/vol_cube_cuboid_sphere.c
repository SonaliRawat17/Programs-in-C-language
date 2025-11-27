#include<stdio.h>
void main()
{
    int choice,s,l,b,h,r;
    float v;
    printf("Menu Driven");
    printf("\n1.Volume of Cube");
    printf("\n2.Volume of Cuboid");
    printf("\n3.Volume of sphere");
    printf("\nEnter Choice(1,2 or 3):");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Enter side of Cube:");
               scanf("%d",&s);
               v=s*s*s;
               printf("Volume of Cube is %f",v);
               break;
        case 2:printf("Enter Length,Breadth and height of Cuboid:");
               scanf("%d %d %d",&l,&b,&h);
               v=l*b*h;
               printf("Volume of Cuboid is %f",v);
               break;
        case 3:printf("Enter radius of sphere:");
               scanf("%d",&r);
               v=1.33*3.14*r*r*r;
               printf("Volume of sphere is %f",v);
               break;
        default:
            printf("Invalid input");
    }
    getch();
}

