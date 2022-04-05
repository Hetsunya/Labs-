#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// unsigned int fl ()
// {
//   char c[n],s[n];
//   int i;
//   printf("Number--->");
//   gets(c);
//   for(i = 0; i < strlen(c); i ++)
//        s[i]=c[strlen(c)-i-1];
//   i=atoi(s);
//   printf("%d",i);
// }

int main()
{
  int n;
  char c[n],s[n];
  int i;
  printf("Number--->");
  gets(c);
  for(i = 0; i < strlen(c); i ++)
       s[i]=c[strlen(c)-i-1];
  i=atoi(s);
  printf("%d",i);
  return 0;
}//Записать заданное неотрицательное целое число наоборот.ddd
// вот это cr_assert_eq попробуй
