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
int n, max = -1099, min1, x, min2, g;
printf (" n -> ") ;
scanf ("%d", &n) ;
   //system ("cls");
int A [n];
fill (n , A ) ;

int i, i2;

for ( i = 0; i < n ; i ++)
  {
  printf ("%4d", A[i]);
  }

printf("\n"); printf("\n");
min1 = A[0];
min2 = A[1];
// printf("min1 ---> %d\n", min1);
// printf("min2 ---> %d\n\n", min2);
for(i2 = 0;i2 < n - 1; i2 ++)
{
x = A[i2] + A[i2 + 1];
if(i2 == n) x = A[i2] + A[i2 - 1];

if(x > max){
  max = x;
  // printf("max ---> %d\n", max);
}

if(A[i2] < min1){
    min2 = min1;
    min1 = A[i2];
    // printf ("a ---->%d\n", A[i2]);
    // printf("min1 ---> %d\n", min1);
    // printf("min2 ---> %d\n\n", min2);
  }
if(A[i2] < min2 && A[i2] != min1){
     min2 = A[2];
     // printf("min2 ---> %d\n\n", min2);
   }

// printf ("a ---->%d\n", A[i2]);
// printf("min1 ---> %d\n", min1);
// printf("min2 ---> %d\n\n", min2);
//printf("x --->%d\n", x);
  //printf ("%4d", x);


//printf("\n");


  // printf("exit\n");
  // min2 = x;
  // printf("min1 ---> %d\n", min1);
  // printf("min2 ---> %d\n", min2);
  // printf("\n");
  x = 0;
}

  //printf("max ---> %d\n", max);

    printf("\n");  printf("\n");  printf("\n");  printf("\n");
  printf("min1 ---> %d\n", min1);
  printf("min2 ---> %d\n", min2);
  printf("max ---> %d\n", max);
  g = max + min1 + min2;
  printf("g --->%d\n", g);

return 0;
}
//  Найти два подряд идущих элемента в массиве целых чисел, сумма которых
//  максимальна и прибавить эту сумму к двум минимумам этого массива.
