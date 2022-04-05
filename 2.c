#include <stdio.h>
#include <math.h>

int main()
{
  double x;
  printf("x -->");
  scanf("%lf", &x);
  if (x > 2)
  {
  double y = -log(x + 2.0) - log(x - 2.0);
      if(x < 2.2360679774997614 )
      {
      double z = sqrt(3.0 * y - y);
      printf("%lf\n", y);
      printf("%lf", z);
    }
    else
    {
      printf("1 \n");
      printf("x value is incorrect!");
    }
 }
 else
 {
    printf("1 \n");
   printf("x value is incorrect!");
 }
}//x = (2;sqrt(5)]==[2.2360679774997001 ; 2.2360679774997614]
