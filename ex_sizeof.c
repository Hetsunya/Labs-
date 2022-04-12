#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <stddef.h>

int main ()
 {
   const bool sheep[] = {
     true,  true,  true,  false,
     true,  true,  true,  true,
     true,  false, true,  false,
     true,  false, false, true,
     true,  true,  true,  true,
     false, false, true,  true
   };
   const size_t expected = 17;
  size_t count = 0;
   const size_t n = sizeof(sheep)/sizeof(sheep[0]);
   for(size_t i = 0; i < n; i++)
     {
       if(sheep[i] ==  true)
         {
           count = count + 1;
         }
       }
printf("%d\n", count);
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
