#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matr[4][4];
    int i, j, i2, j2;
    for (i = 0; i < 5 ;i ++)
      {
        for( j = 0; j < 5 ; j++)
        {
          printf ("%d ", matr[i][j]);
          if(j == 4) printf("\n");
        }
      }

    // инициализировать ГСЧ
srand ( time ( NULL ) ) ;

    // а в этот момент - чему равно i и j?
    // правильно, там "мусор"!
    // вот эту строчку убрать!
    // matr[i][j] = rand()%10-80;
printf("\n");printf("\n");printf("\n");printf("\n");
    for(i2=0;i2 < 5;i2++);
    {
        for(j2=0;j2 < 5;j2++);
        {
            matr[i2][j2] = rand () % 101 - 50;
        }
    }
    printf("\n");printf("\n");printf("\n");printf("\n");
    // вот теперь массив заполнен.
    // осталось что-то там поменять местами....
    for (i = 0; i < 5 ;i ++)
      {
        for( j = 0; j < 5 ; j++)
        {
          printf ("%d ", matr[i][j]);
          if(j == 4) printf("\n");
        }
      }

    return 0;
}
