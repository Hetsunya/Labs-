#include <stdio.h>
#include <math.h>
#include <conio.h>

//#define N 10000

double F1(double x)// 0.0 <= x <= 0.6
{
    double f;
    //f = 1 / (1 + 25 * pow(x, 2));
    f = pow(x,2) * atan(x);
    return f;
}

double F2 (double x)// 0,6 < x <= 1.6
{
    double f;
    //f = (x + 2 * pow(x, 4)) * pow(sin(x), 2);
    f = sin(pow(x,-2));
    return f;
}

double main()
{
  int N;
  scanf("%d", &N);
  double S = 0, x, a, b, h;
  const double Pi = 3.14159;
  a = 0;
  b = 2;

  h = (b - a)/N;
  x = a + h;
while (x < b)
{
  if(x <= 1)
  {
    S = S + 4*F1(x);
    x = x + h;
    //проверяем не вышло ли значение x за пределы полуинтервала [a, b)
    if (x >= b) break;
    S = S + 2*F1(x);
    x = x + h;
  }
  else
  {
    S = S + 4*F2(x);
    x = x + h;
    //проверяем не вышло ли значение x за пределы полуинтервала [a, b)
    if (x >= b) break;
    S = S + 2*F2(x);
    x = x + h;
  }
}
if(x <= 1)
{
  S = (h/3)*(S + F1(a) + F1(b));
  printf ("%f", S);
  _getch ();
}
else
{
  S = (h/3)*(S + F2(a) + F2(b));
  printf ("%f", S);
  _getch ();
}
  // S = (h/3)*(S + F(a) + F(b));
  // printf ("%f", S);
  // _getch ();
  return 0;
}
