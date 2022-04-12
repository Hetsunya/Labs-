#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

static void do_test (const int date[3], int expected);
extern int get_day_of_year (const int date[3]);

int get_day_of_year (const int date[3])
{
  int noe = date[0];
  int y = date[2] - 2000;
  if(date[1] == 1)
    {
    noe = noe + 31 + y;
  }
    if(date[1] == 2)
    {
    noe = noe + 28;
       if(date[2] / 4 == 0)
         {
             noe = noe + 29 + y;
       }
    {
}

  }
    if(date[1] == 3)
    {
    noe = noe + 31 + y;
  }
    if(date[1] == 4)
    {
    noe = noe + 30 + y;
  }
    if(date[1] == 5)
    {
    noe = noe + 31 + y;
  }
    if(date[1] == 6)
    {
    noe = noe + 30 + y;
  }
    if(date[1] == 7)
    {
    noe = noe + 31 + y;
  }
    if(date[1] == 8)
    {
    noe = noe + 31 + y;
  }
    if(date[1] == 9)
    {
    noe = noe + 30 + y;
  }
    if(date[1] == 10)
    {
    noe = noe + 31 + y;
  }
    if(date[1] == 11)
    {
    noe = noe + 30 + y;
  }
    if(date[1] == 12)
    {
    noe = noe + 31 + y;
  }
  return noe;
}

static void do_test (const int date[3], int expected)
{
  int actual = get_day_of_year(date);
  cr_assert_eq(actual, expected,
    "for date = {%d, %d, %d}, expected %d days, but got %d",
    date[0], date[1], date[2], expected, actual
  );
}
