#include <stdio.h>

int  main()
{
  int a;
  int i;

  printf("Input the integer number : ");
   scanf("%d", &a);

  if ( a==0 || a==1 ){printf(" It is not a prime nor a composite number\n");}
  if ( a==3 || a==2 ){printf(" It is a prime number\n");}

  for(i = 2; i <= (a / 2); i++) {
        if ( a%i==0 ){
                printf(" It is not a prime number\n");
                break; }

        else {printf(" It is a prime number\n");}
  }


//Goodbye :D
return 0;
 }
//Made by Aylin Vakili - Student number 14025141115 - Practice 2
