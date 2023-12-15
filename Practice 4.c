#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL));
    int x , y ;
    x=rand()%100+1;

    while( y!=x )
        {
         printf("Enter your guess:\n");
         scanf("%d", &y );

         if ( y < x ) {
            printf("Higher\n");
            }
    else if ( y > x ) {
            printf("Lower\n");
            }
         }
 if ( y==x ){
             printf(" Your guess is right!\n The number is %d :D \n", x );
             }
//Done:D
 return 0;
}
 //Made by Aylin Vakili - Student number : 14025141115 - Practice 4
