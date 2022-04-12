#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <math.h>

int i, j, r, c, noe;
void fill(int n, int d, int *a[])
{
for ( i = 0; i < n ; i ++)
  {
    for(j = 0; j < d ; j ++)
    {
      a[i] = rand() % 101 - 50;
    }
  }
  for (i = 0; i < 6 ;i ++)
     {
       for( j = 0; j < 6;j++)
       {
         printf ("%4d", a[i][j]);
         if(j == 6 - 1) printf("\n");
       }
     }
}

int main ()
{
srand ( time ( NULL ) ) ;
int n, max = -1099, min1, x, min2, d;
printf ("rows -> ") ;
scanf ("%d", &n) ;
printf ("columns -> ") ;
scanf ("%d", &d) ;

int A [n][d];
fill(n, d, A) ;
// int r = sizeof(a)/sizeof(a[0]);
// int c = sizeof(a[0])/sizeof(a[0][0]);
// int noe = sizeof(a)/sizeof(a[0][0]);
// for (i = 0; i < r ;i ++)
//    {
//      for( j = 0; j < c;j++)
//      {
//        printf ("%4d", a[i][j]);
//        if(j == c - 1) printf("\n");
//      }
//    }
return 0;
}
