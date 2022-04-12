#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void rec(int n)
{
  int x;
  x = n % 10;
  if( (((n/10) == 0)) && ((n%10) == 0)) return;
  printf("%d", x);
  if(n) rec(n/10);
  else return;

}

int main()
{
  int n;
  printf("Number--->");
  scanf ("%d", &n);
  rec(n);

  return 0;
}//Записать заданное неотрицательное целое число наоборот.ddd
// вот это cr_assert_eq попробуй
