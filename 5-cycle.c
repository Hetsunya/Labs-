#include <stdio.h>
#include <math.h>
#include <stdlib.h>


// void cy()
// {
//   char c[255],s[255];
//   int i;
//   printf("Number--->");
//   gets(c);
//   for(i = 0; i < strlen(c); i ++)
//        s[i]=c[strlen(c)-i-1];
//   i=atoi(s);
//   printf("%d",i);
// }
void cy(int n)
{
  int a,x,n1;
  n1 = n;
  for(int i = 0;i < n1;i++)
  {

    if(n==0){
      break;
    }
  if (n < 10)
  {
    printf("%d", n);
    n=n/10;
}
  else
  {
    printf("%d", n%10);
    n=n/10;
  }
}
  return;
}
int main()
{
  int n;
  printf("Number--->");
  scanf ("%d", &n);
  cy(n);
  return 0;
}//Записать заданное неотрицательное целое число наоборот.ddd
// вот это cr_assert_eq попробуй
