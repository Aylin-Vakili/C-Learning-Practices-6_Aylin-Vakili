#include <stdio.h>

int main ()
{
    float a ;
    float Amax = 0;

    while ( a!= 0 ){
    printf("Enter your number : ");
     scanf("%f", &a );

     if ( a > Amax )  { Amax = a ;}
    }
    printf ("\n The maximum number is : \n" );
    printf(" %f\n\n", Amax );

//Goodbye :D
return 0;
}
//Made by Aylin Vakili - Student number : 14025141115 - Practice 1
