#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill ( int n , int a [])
 {
 int i ;
 for ( i = 0; i < n ; i ++)
 a [i] = rand () % 101 - 50;
 }

int main ()
 {
  srand ( time ( NULL ) ) ;
  int n, max, min1, x, min2;
  printf (" n -> ") ;
  scanf ("%d", &n) ;
   //system ("cls");
  int A [n];
  fill (n , A ) ;

  int i, i2;

  for ( i = 0; i < n - 1 ; i ++)
  {
  printf ("%4d", A[i]);
  }
  printf("\n");
  printf("\n");
  min1 = A[0];
  min1 = A[1];
  for(i2 = 0;i2 < n - 1; i2 ++)
  {
x = A[i2] + A[i2 + 1];

if(x > 0)
    {
      if(x < min1)
      {
        min2 = min1;
        min1 = x;
        printf("min1 ---> %d\n", min1);
        printf("min2 ---> %d\n", min2);
      }
    }
else
    {
      if(x < min1)
      {
        min2 = min1;
        min1 = x;
        printf("min1 ---> %d\n", min1);
        printf("min2 ---> %d\n", min2);
      }
    }
printf("x --->%d\n", x);
  /*
  printf("min1 ---> %d\n", min1);
  printf("min2 ---> %d\n", min2);
  printf("\n");*/

  /*
  printf("exit\n");
  min2 = x;
  printf("min1 ---> %d\n", min1);
  printf("min2 ---> %d\n", min2);
  printf("i --->%d\n", i2);
  printf("\n");*/
}

  //printf("max ---> %d\n", max);
  x = 0;

    printf("\n");  printf("\n");  printf("\n");  printf("\n");
  printf("min1 ---> %d\n", min1);
  printf("min2 ---> %d\n", min2);

return 0;
}
 /*Найти два подряд идущих элемента в массиве целых чисел, сумма которых
 максимальна и прибавить эту сумму к двум минимумам этого массива.
 if(min2 > min1)
   min2 = min1;
if(min2 < min1)
    min2 = min1;

    (x >= min1 && min1 < 0 && min1 != x && min2 != x) || (min2 < x && min1 != x && min2 != x) || (x > 0 && min1 != x && min2 != x)

    if((min2 < x && min1 != x && min2 != x) || (x > 0 && min1 != x && min2 != x))
        goto exit;

          exit :{
            min2 = x;
            printf("x --->%d\n", x);
            printf("min1 ---> %d\n", min1);
            printf("min2 ---> %d\n", min2);
            printf("exit\n");
            printf("\n");
          }
       */
