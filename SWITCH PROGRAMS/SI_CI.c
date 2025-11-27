#include <stdio.h>
#include <math.h>
int main () {
    int choice;
    float p,r,t ,si,ci,a,n;
    printf ( "Enter the type of interest to perform : \n ");
    printf (" 1. Simple interest : \n");
    printf (" 2. Compound interest ;\n ");
    scanf ("%d", &choice);
    printf (" Enter the value of Principal [Initial money] : ") ;
    scanf ("%2f", &p );
    printf (" Enter the value of Time  [ in years ] : ") ;
    scanf ("%2f", &t );
    printf (" Enter the value of Rate [in percentage ] : ") ;
    scanf ("%2f", &r );

    switch ( choice )
          { case 1:

                if ((r> 100)||(r<1))
                   {printf (" Invalid value of rate ");}
                else {
                 si = p*r*t;
                printf (" SIMPLE INTEREST : %2f ", si);}
              break;

            case 2 :

              printf  (" Enter the number of time interest is compounded per year  : ");
              scanf ("%2f", &n );
              if ((n >12)||(n<1))
               {printf ("Invalid value of compounded interest  ");}
               else
                  { a=p* pow((1+ r/n),n*t);
                    ci = a - p ;
                    printf (" COMPOUND INTEREST : %d ", ci);
                  }
               break;
            default :
                printf (" INVALID INPUT ");

          }
    return 0 ;
}
