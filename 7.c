// Изменить порядок строк в матрице таким образом, чтобы элементы первого
// столбца были расположены в порядке убывания.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void sort(int a[][4])
{
int x, d, i, j, i2, j2, n, r, c, noe;
  for (i = 0; i < r;i++)
    {
      for(j = 1;j < c;j++)
      {
        if((a[i][j] < a[i + j][j]))
        {
          if(i == r - 1)
          {
            break;
          }
          x = a[i][j];
          a[i][j] = a[i + j][j];
          a[i + j][j] = x;
        }
      if(i > 0 && i != c)
      {
        if(a[i][j] > a[i -1][j])
        {
          x = a[i][j];
          a[i][j] = a[i - 1][j];
          a[i - 1][j] = x;
        }
      }
    }
    }
}
int main()
{

int x, d, i, j, i2, j2, n, r, c, noe;
int a[5][4] = {
  8, 4, 5, 3,
  10, 7, 8, 9,
  2, 3, 7, 3,
  1, 7, 2, 1,
  9, 2, 5, 1
};
  printf( "rows: %d\n", sizeof( a ) / sizeof( a[0] ) );
  printf( "columns: %d\n", sizeof( a[0] ) / sizeof( a[0][0] ) );
  printf( "number of elements: %d\n", sizeof( a ) / sizeof( a[0][0] ) );
  r = sizeof(a)/sizeof(a[0]);
  c = sizeof(a[0])/sizeof(a[0][0]);
  noe = sizeof(a)/sizeof(a[0][0]);
  printf("matr\n");
  for (i = 0; i < r;i ++)
    {
      for( j = 0; j < c ; j++)
      {
        printf ("%4d", a[i][j]);
        if(j == c -1) printf("\n");
      }
    }

  // for (i = 0; i < r;i++)
  //   {
  //     for(j = 1;j < c;j++)
  //     {
  //       if((a[i][j] < a[i + j][j]))
  //       {
  //         if(i == r - 1)
  //         {
  //           break;
  //         }
  //         x = a[i][j];
  //         a[i][j] = a[i + j][j];
  //         a[i + j][j] = x;
  //       }
  //     if(i > 0 && i != c)
  //     {
  //       if(a[i][j] > a[i -1][j])
  //       {
  //         x = a[i][j];
  //         a[i][j] = a[i - 1][j];
  //         a[i - 1][j] = x;
  //       }
  //     }
  //   }

    printf("\n");
    for (i2 = 0; i2 < r ;i2 ++)
       {
         for( j2 = 0; j2 < c;j2++)
         {
           printf ("%4d", a[i2][j2]);
           if(j2 == c - 1) printf("\n");
         }
       }
    return 0;
  }
