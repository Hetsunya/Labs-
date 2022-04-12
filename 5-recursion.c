#include <stdio.h>
#include <math.h>
#include <stdlib.h>

<<<<<<< HEAD
void rec(int n)
{
  int x;
  x = n % 10;
  if( (((n/10) == 0)) && ((n%10) == 0)) return;
  printf("%d", x);
  if(n) rec(n/10);
  else return;

=======
unsigned int fl (int n)
{
  s[i]=c[strlen(c)];
  fl(i-1);
  i=atoi(s);
  printf("%d",i);
>>>>>>> 62831cf65be56ca14830fce0af1ad3fe91f33919
}

int main()
{
<<<<<<< HEAD
  int n;
  printf("Number--->");
  scanf ("%d", &n);
  rec(n);
=======
  char c[n],s[n];
  printf("Number--->");
  scanf ("%d", &n);
  char *gets(c);
  fl(n);
>>>>>>> 62831cf65be56ca14830fce0af1ad3fe91f33919

  return 0;
}//Записать заданное неотрицательное целое число наоборот.ddd
// вот это cr_assert_eq попробуй
