#include<stdio.h>


int main()
{
  int i,n;
  int a = 0, b = 1 ;

  printf("Enter the number of terms: ");
  scanf("%d", &n );
  printf(" Fibonacci Series: %d , %d ,", a , b );


  for (i = 1 ; i <= n-2 ; i++) {
    int sum = a + b ;
    printf(" %d ,", sum );
    a = b ;
    b = sum ;
  }
printf("\b ");

//Goodbye XD
return 0;
}
//Made by Aylin Vakili - Student number 14025141115 - Practice 3
