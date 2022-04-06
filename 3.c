#include <stdio.h>
#include <math.h>

double f,x;

void fr()
{

      printf("x        f(x)\n");
      printf("--------------\n");

      for (x = 0.0; x < 1.6f; x + 0.1f)
      {
        if (x >= 0 && x < 0.7f)
        {
          f = 1 / (1 + 25 * pow(x, 2));
        }

        if (x >= 0.6f && x < 1.7f)
        {
          f = (x + 2 * pow(x, 2))*pow(sin(x), 2);
        }

        printf("%0.1f        %0.1f\n",x, f);

        f = 0;
        x = x + 0.1;
      }
}

void dw()
{

    printf("x        f(x)\n");
    printf("--------------\n");

    do
    {
      if (x >= 0 && x <= 0.6)
      {
        f = 1 / (1 + 25 * pow(x, 2));
      }

      if (x >= 0.6 && x < 1.7)
      {
        f = (x + 2 * pow(x, 2))*pow(sin(x), 2);
      }

      printf("%0.1f        %0.1f\n",x, f);

      f = 0;
      x = x + 0.1;
  } while (x < 1.6f);
}

int main()
{
  printf("for \n");
  fr();
  // printf("\n");printf("\n");
  x = 0;
  printf("do while \n");
  // printf("\n");printf("\n");
  dw();

  return 0;
}
