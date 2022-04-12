#include <stdio.h>
#include <math.h>

int main()
{
  float f,x;

  printf("x        f(x)\n");
  printf("--------------\n");

  for (x = 0.0; x < 1.7f; x + 0.1f)
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

  return 0;
}
